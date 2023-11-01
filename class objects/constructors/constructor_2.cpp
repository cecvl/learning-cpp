#include <iostream>
using namespace std;

const int current_year = 2023;

class Person{
   private:
    int age;
    int year_of_birth;
   public: 
     void display(){
         cout << "YEAR OF BIRTH: " << current_year - age << endl;
    }
    Person() : age(18), year_of_birth(2005){
    }


};
int main()
{
    Person person1;
    //cout << "Enter your age: ";
    //cin >> l.age;
    //cout <<"Year of birth: "<< current_year - person1.age;
    person1.display();
}