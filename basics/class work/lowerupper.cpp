/* 
check whether a character is lowercase or uppercase */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str ;
    cout << "Enter a character: ";
    cin >> str;
    if (islower(str))
        cout << str << " is lowercase.";
    else if (isupper(str))
        cout << str << " is uppercase.";
    else
        cout << str << " is neither lowercase nor uppercase.";
}
