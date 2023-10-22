#include <iostream>
using namespace std;

//use nested for loop

int main ()
{
    int numbers[4][2] = { {1, 2},{3, 4},{5, 6},{7, 8} };

    cout << "Display numbers: \n";
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 2; ++j) 
        {
            cout << "numbers[" << i << "][" << j << "]: ";
            cout << numbers[i][j] << endl;
        }
    }
    cout << "Elements in [2][0] and [2][1] " << endl;
    cout << numbers[2][0] << " and " << numbers[2][1] << endl;
}