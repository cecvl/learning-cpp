#include <iostream>
using namespace std;
struct Measure{
    int length;
    float width,height,area;
};
//Passing arguments by referencing
float calcVolume(int &length, float &width, float &height){
    return length * width * height;
};
int main()
{
    Measure d;

    cout << "Enter length, width, height: ";
    cin >>  d.length >> d.width >> d.height;

    cout << "\nVolume = " << calcVolume(d.length,d.width,d.height) << endl;
    cout << "\nArea = " << d.length * d.width;
    /* alternative way
        (*ptr).area = (*ptr).length * (*ptr).width;
        */
}