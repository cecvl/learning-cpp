#include <iostream>
using namespace std;
struct Measure{
    int length;
    float width,area;
};
int main()
{
    Measure d;

    cout << "Enter length: ";
    cin >>  d.length;
    cout << "Enter width: ";
    cin >> d.width;

    cout << "Area: " << d.length * d.width;
    /* alternative way
        (*ptr).area = (*ptr).length * (*ptr).width;
        */
}