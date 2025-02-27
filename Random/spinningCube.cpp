#include <iostream>
#include <cmath>
#include <chrono>
#include <thread>

const int width = 40;
const int height = 20;
const float aspect = float(width) / height;
const float pixelAspect = 11.0f / 24.0f;
const float cubeSize = 10.0f;
const int distanceFromViewer = 20;
const float incrementSpeed = 0.04f;

struct Point {
    float x, y, z;
};

void clearScreen() {
    std::cout << "\033[2J\033[H";
}

void drawPoint(char screen[height][width], int x, int y) {
    if (x >= 0 && x < width && y >= 0 && y < height) {
        screen[y][x] = '#';
    }
}

void drawCube(float angle) {
    Point cube[8] = {
        {-cubeSize, -cubeSize, -cubeSize}, {-cubeSize, -cubeSize, cubeSize},
        {-cubeSize, cubeSize, -cubeSize},  {-cubeSize, cubeSize, cubeSize},
        {cubeSize, -cubeSize, -cubeSize},  {cubeSize, -cubeSize, cubeSize},
        {cubeSize, cubeSize, -cubeSize},   {cubeSize, cubeSize, cubeSize}
    };

    // Rotation matrices
    float cosA = cos(angle);
    float sinA = sin(angle);

    char screen[height][width];
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            screen[y][x] = ' ';
        }
    }

    for (Point& p : cube) {
        float x = p.x;
        float z = p.z;
        p.x = x * cosA - z * sinA;
        p.z = z * cosA + x * sinA;

        float y = p.y;
        z = p.z;
        p.y = y * cosA - z * sinA;
        p.z = z * cosA + y * sinA;
    }

    for (Point p : cube) {
        int x = int((p.x / (p.z + distanceFromViewer)) * width * aspect * pixelAspect + width / 2);
        int y = int((p.y / (p.z + distanceFromViewer)) * height + height / 2);
        drawPoint(screen, x, y);
    }

    clearScreen();
    for (int y = 0; y < height; ++y) {
        for (int x = 0; x < width; ++x) {
            std::cout << screen[y][x];
        }
        std::cout << '\n';
    }
}

int main() {
    float angle = 0.0f;
    while (true) {
        drawCube(angle);
        angle += incrementSpeed;
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    }
    return 0;
}
