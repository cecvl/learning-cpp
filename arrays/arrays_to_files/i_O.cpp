#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int numbers[4][2][2] = { { {1, 2}, {3, 4} },
                             { {5, 6}, {7, 8} },
                             { {9, 10}, {11, 12} },
                             { {13, 14}, {15, 16} } };

    // Open a file for writing
    fstream outputFile("output.csv", ios::app);

    if (outputFile)
    {
        cout << "Writing to file..." << endl;
        for(int i = 0; i < 4; ++i){
            for(int j = 0; j < 2; ++j){
                for(int k = 0; k < 2; ++k){   
                    outputFile << numbers[i][j][k] << " ";
                }
                outputFile << endl;
            }
            outputFile << endl;
        }
        outputFile.close();
    }
    else
    {
        cout << "Error opening the file." << endl;
    }

   

    return 0;
}
