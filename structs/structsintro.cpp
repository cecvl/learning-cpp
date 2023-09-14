#include <iostream>
using namespace std;

const double VAT = 0.18;
//void displayContent(Person p);

struct Person{
    int age;
    char name[50];
    float salary;
    float salary_tax;
};
void display(Person p){
    cout << "Customer: " << p.name <<endl;
    cout << "Age: " << p.age << endl;
    cout << "Salary: " << p.salary << endl;
    cout << "Tax: "<< p.salary_tax << endl;
}

int main()
{
    Person cecvl;
    cout << "Enter name: ";
    cin.getline(cecvl.name, 50);
    cout << "Enter salary: ";
    cin >> cecvl.salary;
    cout << "Enter age: ";
    cin  >> cecvl.age;

    cecvl.salary_tax = cecvl.salary * VAT;

    display(cecvl);

}