#include <iostream>
using namespace std;

class Student
{
    public:
    int reg_no;
    string name;
    int age;
    void printage(){
        cout << "The student age: ";// << age <<endl;
    };
};
int main()
{
    Student s1;
    s1.reg_no = 2020; 
    s1.name = "Tom";
    s1.age = 22;
    s1.printage();
    cout << s1.age;
} 