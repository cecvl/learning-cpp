#include <iostream>
using namespace std;

class Room
{
    private:
        double length;
        double breadth;
        double height;
    public:
        void inputData(double len, double bre, double hei){
            length = len;
            breadth = bre;
            height = hei;
        };
        double calculateArea(){
            return length * breadth;
        }
        double calculateVolume(){
            return length * breadth * height;
        }
    };

int main()
{
    Room room1;
    room1.inputData(23.3,53.5,46.3);
    cout << "Area: " << room1.calculateArea() << endl;
    cout << "Volume: " << room1.calculateVolume();
}
    
