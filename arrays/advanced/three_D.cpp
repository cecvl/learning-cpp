#include <iostream>
using namespace std;

//use nested for loop

int main ()
{
   
    int numbers[4][2][2] = { { {1, 2}, {3, 4} },
                             { {5, 6}, {7, 8} },
                             { {9, 10}, {11, 12} },
                             { {13, 14}, {15, 16} } };

    cout << "Display numbers: \n";
   for(int i = 0; i < 4; ++i){
         for(int j = 0; j < 2; ++j){
              for(int k = 0; k < 2; ++k){
                cout << "numbers[" << i << "][" << j << "][" << k << "]: ";
                cout << numbers[i][j][k] << endl;
              }
         }
   }

   
}