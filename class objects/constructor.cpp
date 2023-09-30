#include <iostream>
using namespace std;
//constructor same name as class 
//used to initialize objects
//default, copy, parametized

// declare a class
class Wall {
  private:
    double length;
    double height;

  public:

    // initialize variables with parameterized constructor
    Wall(double len, double hgt) {
      length = len;
      height = hgt;
    }

    // copy constructor with a Wall object as parameter
    // copies data of the obj parameter
    Wall(Wall &obj) {
      length = obj.length;
      height = obj.height;
    }

    double calculateArea() {
      return length * height;
    }
};
int main()
{
    Wall wall1(23.3,34.2); //constructor can use private data members
    cout << "Area = " << wall1.calculateArea();
}