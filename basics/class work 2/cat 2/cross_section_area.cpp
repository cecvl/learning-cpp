#include <iostream>
using namespace std;


class Waterpipe
{
private:
    int large_R;
    int small_r;
public:
    Waterpipe(): large_R(10), small_r(7)
    {
    }
    //PI(R^2 - r^2)
    double getArea()
    {
        return 3.14285714 * (large_R * large_R - small_r * small_r);
    }
};

int main()
{
    Waterpipe pipe1;
    cout << "Cross-Section Area of pipe1: " << pipe1.getArea() << endl;
    
}