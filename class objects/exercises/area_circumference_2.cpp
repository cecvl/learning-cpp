#include <iostream>
using namespace std;

class Test
{
    public:
    float r, area ,circumference;
    void input()
    {
        cout <<"Enter radius: "<< endl;
        cin >> r;
    };
    void findthearea(){
        area = 3.14285714 * r * r ;
    };
    void find_circumference(){
        circumference = 3.14285714 * 2 * r ;
    }
    void display(){
        cout << "Area of circle = " << area << endl;
        cout << "Circumference = " << circumference << endl;  
    }
};

int main()
{
    Test obj;
    obj.input();
    obj.findthearea();
    obj.find_circumference();
    obj.display();
}