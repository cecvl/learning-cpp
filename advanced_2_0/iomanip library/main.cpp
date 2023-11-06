#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double PI = 3.141592653589793238;
    cout << setprecision(7) << PI << endl;
    //cout << fixed;

    //cout << setprecision(10) << PI << endl;

    //set width
    cout << setw(30) << "========================" << endl;

    cout << setfill('*') << setw(5) ;
    cout << 40 << endl;
}