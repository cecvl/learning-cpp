#include <iostream>
using namespace std;
int add(int x, int y){
    return x + y;
}
double add(double x, int y){
    return x + y;
}
double add(double x, double y){
    return x + y;
}
int main()
{
    double a, b;
    cout  << "Enter numbers: ";
    cin >> a >> b;

    cout << add(a, b);
    
}