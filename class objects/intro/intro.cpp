#include <iostream>
using namespace std;

class Room{
    public: //members can be accessed anywhere
        double length; //data members
        double breadth;
        double height;

        double calculateArea(){ //member functions
            return length * breadth;
        }
        double calculateVolume(){
            return length * breadth * height;
        }
};
int main()
{   
    Room room1; //object
    cout << "Enter: ";
    cin >> room1.length >> room1.breadth >> room1.height;
    cout << room1.calculateArea() << endl;
    cout << "bytes = " << sizeof(room1.height);
}