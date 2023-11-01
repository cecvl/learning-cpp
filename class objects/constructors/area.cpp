/* calculate areas of rectangle and triangle using constructors 
*/
#include <iostream>
using namespace std;

class Shape{
    private:    
        int width_height;
    public:
        Shape(int a)
        {
            width_height = a;
        }
    };

class Rectangle: public Shape{
    private:
        int length;
    //invoking base class constructor in derived class    
    public:
        Rectangle(int a,int b): Shape(a){
            length = b;
        }
        int Area_Rec(int b , int a){
            return a * b;
        }    
};
class Triangle: public Shape{
    private:
        int base;
    public:
        Triangle(int a,int b):Shape(a){
            base = b;
        }
        int Area_Tri(int a,int b){
            base = b;
            return (a * b)/2;
        }     
};


int main()
{
    Triangle item1(4,4);
    Rectangle item2(5,4); // l * w

    cout << "Area of Triangle: " << item1.Area_Tri(4,4) << endl;
    cout << "Area of Rectangle: " << item2.Area_Rec(4,4) << endl;   
};