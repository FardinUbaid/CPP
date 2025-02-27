#include <iostream>


void splitIP(const char ip[], int ipParts[4]) {

    int part = 0, idx = 0, value = 0;

    while (ip[idx] != '\0') {

        if (ip[idx] == '.') {

            ipParts[part] = value; 
            value = 0;
            part++;

        } else {

            value = value * 10 + (ip[idx] - '0'); 

        }

        idx++;
    }

    ipParts[part] = value;
}


int calculateSubnetMask(int requiredHosts) {

    int totalIPs = requiredHosts + 2; 
    int bits = 1;

   
    while (bits < totalIPs) {
        bits *= 2;
    }

   
    int hostBits = 0;

    while (bits > 1) {

        bits /= 2;
        hostBits++;

    }

    return 32 - hostBits;
}


int calculateTotalIPs(int subnetMask) {

    int hostBits = 32 - subnetMask; 
    int totalIPs = 1;

    for (int i = 0; i < hostBits; i++) {

        totalIPs *= 2; 

    }

    return totalIPs;
}


void calculateSubnetMaskInDottedDecimal(int subnetMask, int maskParts[4]) {
   
    for (int i = 0; i < 4; i++) {

        if (subnetMask >= 8) {

            maskParts[i] = 255; 
            subnetMask -= 8;

        } else if (subnetMask > 0) {

            maskParts[i] = (256 - (1 << (8 - subnetMask))); 
            subnetMask = 0;

        } else {

            maskParts[i] = 0; 

        }
    }
}


unsigned int ipToInteger(int ipParts[4]) {

    return (ipParts[0] * 16777216) + (ipParts[1] * 65536) + (ipParts[2] * 256) + ipParts[3];

}


void integerToIP(unsigned int ip, int ipParts[4]) {

    ipParts[0] = (ip / 16777216) % 256;
    ipParts[1] = (ip / 65536) % 256;
    ipParts[2] = (ip / 256) % 256;
    ipParts[3] = ip % 256;

}


void printIP(int ipParts[4]) {

    std::cout << ipParts[0] << "." << ipParts[1] << "." << ipParts[2] << "." << ipParts[3];

}

int main() {

    char inputIP[16];
    int numberOfSubnets;

    
    std::cout << "Enter base IP address (e.g., 192.168.1.0): ";
    std::cin >> inputIP;

    std::cout << "Enter the number of subnets: ";
    std::cin >> numberOfSubnets;

    
    int hostRequirements[10];

    for (int i = 0; i < numberOfSubnets; ++i) {

        std::cout << "Enter the number of hosts for subnet " << i + 1 << ": ";
        std::cin >> hostRequirements[i];

    }

    
    int ipParts[4];
    splitIP(inputIP, ipParts);

    
    unsigned int currentIP = ipToInteger(ipParts);

    
    for (int i = 0; i < numberOfSubnets; ++i) {

        int requiredHosts = hostRequirements[i];
        int subnetMask = calculateSubnetMask(requiredHosts);
        int totalIPs = calculateTotalIPs(subnetMask);

        int networkIP[4], firstIP[4], lastIP[4], broadcastIP[4], maskParts[4];

        
        calculateSubnetMaskInDottedDecimal(subnetMask, maskParts);

        integerToIP(currentIP, networkIP);

        integerToIP(currentIP + 1, firstIP);
     
        integerToIP(currentIP + totalIPs - 2, lastIP);
 
        integerToIP(currentIP + totalIPs - 1, broadcastIP);

        
        std::cout << "\nSubnet " << i + 1 << ":\n";
        std::cout << "  Network IP: ";
        printIP(networkIP);
        std::cout << "\n  First Usable IP: ";
        printIP(firstIP);
        std::cout << "\n  Last Usable IP: ";
        printIP(lastIP);
        std::cout << "\n  Broadcast IP: ";
        printIP(broadcastIP);
        std::cout << "\n  Subnet Mask: ";
        printIP(maskParts);
        std::cout << "\n";

        
        currentIP += totalIPs;
        
    }

    return 0;
}
