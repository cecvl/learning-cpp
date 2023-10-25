#include <iostream>
using namespace std;

int main()
{
    int *p,numbers = 5;
    cout << "Numbers = " << numbers <<endl;

    *p = numbers;
    p = &numbers;
    cout << "memory location = " << &p <<endl;

    *p = 67;

    cout << "Numbers = " << numbers << endl;
    cout << "memory location = " << &p << endl;
}