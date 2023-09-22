#include <iostream>
using namespace std;

struct Measure{
    int length;
    float width, area;
};
int main()
{
    Measure *ptr, d; // ptr is a pointer to a Measure struct
    ptr = &d; // ptr now points to the address of a d struct

    cout << "Enter length: ";
    cin >>  ptr->length;
    cout << "Enter width: ";
    cin >> ptr->width;

    //cout << "Area: " << d.length * ptr->width;
    cout << "Area: " << (*ptr).length * (*ptr).width;
}