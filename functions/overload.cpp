#include <iostream>
using namespace std;

//Find the absolute of a of given number

float absolute(float var){
    if(var < 0.0)
        var = -var;
    return var;
}

int absolute(int var){
    if (var < 0)
        var = -var;
    return var;
}

void display(int number)
{
    cout << "Integer is " << number;
}

void display(float number1){ 
    cout << "Decimal =  " << number1;
}

int main()
{
    float num; 
    cout << "Enter number: ";
    cin >> num;

    cout << "Absolute = " << absolute(num) << endl;//calls float absolute()
    display(num); //calls void display(float number1)
    return 0;

}