#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void loadingBar(int width, int total) {
    for (int i = 0; i <= width; ++i) {
        int progress = (i * total) / width;
        cout << "\r[";

        // Fill the bar
        for (int j = 0; j < i; ++j) {
            cout << "=";
        }

        // Remaining space
        for (int j = i; j < width; ++j) {
            cout << " ";
        }

        cout << "] " << (progress * 100) / total << "%";
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(100)); // Adjust the delay as needed
    }
    cout << endl;
}

int main() {
    int total = 10;  // Total units of progress
    int width = 40;   // Width of the loading bar

    loadingBar(width, total);

    // Your main program logic starts here
    for (int i = 0; i < total; ++i) {
        // Simulate some work
        this_thread::sleep_for(chrono::milliseconds(50));
        loadingBar(width, total); // Update the loading bar
    }

    cout << "Loading complete. Main program continues..." << endl;

    // Continue with your main program logic

    return 0;
}
