#include <iostream>
#include <cmath>
using namespace std; 

int main(){
    double number, squareroot, squared;
    
    cout << "enter a number: ";
    cin >> number;

    squareroot = sqrt(number);
    squared = squareroot * squareroot ;

    cout << "Square root of " << number << " is " <<squareroot << endl;
    //cout << "Square of " << squareroot << " is " << squared;
    return 0;
}