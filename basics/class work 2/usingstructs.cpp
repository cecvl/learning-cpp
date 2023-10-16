#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// Define a struct to represent your data
struct Data {
    int id;
    string name;
    double value;
};

int main() {
    // Create an array or vector of structs
    vector<Data> data = {
        {1, "John", 10.5},
        {2, "Alice", 20.2},
        {3, "Bob", 15.7}
    };

    // Open the CSV file for writing
    ofstream csvFile("data.csv");

    if (!csvFile.is_open()) {
        cerr << "Failed to open the CSV file for writing." << endl;
        return 1;
    }

    // Write the data to the CSV file
    csvFile << "ID,Name,Value" << endl; // Write the header

    for (const Data& entry : data) {
        csvFile << entry.id << "," << entry.name << "," << entry.value << endl;
    }

    // Close the CSV file
    csvFile.close();

    cout << "Data has been written to data.csv." << endl;

    return 0;
}
