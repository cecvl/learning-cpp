#include <iostream>
using namespace std;

const int current_year = 2023;

class Line{
   public:
    int age;
    int year_of_birth;
    void display(){
         cout << "YEAR OF BIRTH: " << current_year - age << endl;
    }
    //Line() : age(0), year_of_birth(0){
//}
};
int main()
{
    Line l;
    cout << "Enter your age: ";
    cin >> l.age;
    //cout <<"Year of birth: "<< current_year - l.age;
    l.display();
}