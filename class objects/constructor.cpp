#include <iostream>
using namespace std;
//constructor same name as class 

class Wall{
    private: 
        double length;// data member
        double height;

    public:        
        Wall(double len, double hei){
            length = len;
            height = hei;
        }
        double calculateArea(){
            return length * height;
            }
};
int main()
{
    Wall wall1(23.3,34.2); //constructor can use private data members
    cout << "Area = " << wall1.calculateArea();
}