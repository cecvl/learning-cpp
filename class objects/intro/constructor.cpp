#include <iostream>
using namespace std;
//constructor same name as class 
//used to initialize objects
//default, copy, parametized


class Wall {
  private:
    int length;
    int height;

  public:
  Wall(double len, double hgt) {
      length = len;
      height = hgt;
    }
    // copy constructor with a Wall object as parameter
   /*
    Wall(Wall &obj) { 
      length = obj.length;
      height = obj.height;
    }
    */

    int calculateArea() {
      return length * height;
    }
};
int main()
{
    Wall wall1(20,4);
    cout << "Area = " << wall1.calculateArea();
}