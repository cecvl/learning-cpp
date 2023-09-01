#include <iostream>
using namespace std;

//used with arrays and vectors
int main (){
    int numbers[] = {324,2245,242,25,2356};


 //use const because array is not being modified   
    for (const int &n : numbers){ //use of reference operator
        cout << n << " ";
    }
    return 0;
}