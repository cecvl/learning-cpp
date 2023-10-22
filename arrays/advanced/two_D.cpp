#include <iostream>
using namespace std;

//use nested for loop

int main ()
{
    
    int numbers[4][2] = { {1, 2}, {3, 4}, {5, 6}, {7, 8} };
      

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
    
    //Check for even and odd numbers
    int even = 0;
    int odd = 0;

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<2; j++)
        {
            if(numbers[i][j]%2!=1){
           even++;    
        }else{
            odd++;
        }
    } 
} 
    cout << "Even numbers: "<< even << endl;
    cout << "Odd numbers: " << odd << endl;

    //Check which is larger between [0][0] and [0][1]
    bool result;

    result = (numbers[0][0] > numbers[0][1]);
    if (result == 1)
    {
        cout << "numbers[0][0] is larger than numbers[0][1]" << endl;    
    }
    else
    {
        cout << "numbers[0][1] is larger than numbers[0][0]" << endl;
    }
}    