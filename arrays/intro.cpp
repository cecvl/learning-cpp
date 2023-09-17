#include <iostream>
using namespace std;

int main()
{
    //dataType arrayName[arraySize]
    int x[6] = {18,19,20,21,22,23}; //hold six integers

    cout << "\nThe numbers are:  ";// <<endl;

    for (int i = 0; i < 6; ++i){ // loop from 0 to 5
        cout << x[i] << " ";
    }
//ranged for loop
    cout << endl << "As printed by ranged for loop: ";
    for (const int &n : x){ 
        cout  << n << " ";
    }
    
    return 0;
}