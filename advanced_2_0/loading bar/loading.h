#ifndef LOADING_H
#define LOADING_H

#include <iostream>
#include <thread>
#include <chrono>

void loadingBar(int width = 40, int total = 100) {
    for (int i = 0; i <= width; ++i) {
        int progress = (i * total) / width;
        std::cout << "\r[";

        // Fill the bar
        for (int j = 0; j < i; ++j) {
            std::cout << "=";
        }

        // Remaining space
        for (int j = i; j < width; ++j) {
            std::cout << " ";
        }

        std::cout << "] " << (progress * 100) / total << "%";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Adjust the delay as needed
    }
    std::cout << std::endl;
}

#endif // LOADING_H
