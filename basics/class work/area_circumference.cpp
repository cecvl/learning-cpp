#include <iostream>
using namespace std;

#define PI 3.14285714

//const char* squaredSymbol = "\u00B2";

class Circle{
    public:
        double radius;
        double area(){
            return PI * radius * radius;
        }
        double circumference(){
            return 2 * PI * radius;
        }
};

int main(){
    Circle obj;
    cout << "Enter the radius of the circle: ";
    cin >> obj.radius;

    cout << "Area of the circle: " << obj.area() <<" cm"<< endl;
    cout << "Circumference of the circle: " << obj.circumference()<<" cm" << endl;
}