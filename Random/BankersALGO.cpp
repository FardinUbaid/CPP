#include <iostream>

int main() {
    int n, m;
    
    // Input number of processes and resources
    std::cout << "Enter the number of processes: ";
    std::cin >> n;
    
    std::cout << "Enter the number of resources: ";
    std::cin >> m;
    
    // Declare matrices and arrays
    int allocation[n][m], maximum[n][m], need[n][m], available[m];
    int finish[n] = {0}; // To mark if process is finished
    int safeSequence[n];  // To store the safe sequence

    // Input Allocation matrix
    std::cout << "Enter the Allocation matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> allocation[i][j];
        }
    }

    // Input Maximum matrix
    std::cout << "Enter the Maximum matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> maximum[i][j];
            need[i][j] = maximum[i][j] - allocation[i][j]; // Calculate the need matrix
        }
    }

    // Input Available resources
    std::cout << "Enter the Available resources:\n";
    for (int i = 0; i < m; i++) {
        std::cin >> available[i];
    }

    int count = 0; // To store the number of processes in the safe sequence
    while (count < n) {
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (finish[i] == 0) {  // Process is not finished yet
                int j;
                for (j = 0; j < m; j++) {
                    if (need[i][j] > available[j]) {  // Check if needs can be satisfied
                        break;
                    }
                }

                // If all needs of process i can be satisfied
                if (j == m) {
                    // Add its allocated resources to available resources
                    for (int k = 0; k < m; k++) {
                        available[k] += allocation[i][k];
                    }
                    // Mark the process as finished
                    finish[i] = 1;
                    safeSequence[count++] = i;
                    found = true;
                }
            }
        }

        if (!found) {
            std::cout << "The system is in an unsafe state. No safe sequence exists.\n";
            return 0;
        }
    }

    // Output the safe sequence
    std::cout << "The system is in a safe state.\nSafe sequence is: ";
    for (int i = 0; i < n; i++) {
        std::cout << "P" << safeSequence[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
