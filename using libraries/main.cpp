#include <iostream>
#include "add.h"

using namespace std;

int main()
{
    double a, b;
    cout  << "Enter numbers: ";
    cin >> a >> b;

    cout << a << " + " << b << " = " << add(a, b);
    
}