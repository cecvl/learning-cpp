#include <iostream>
using namespace std;

const double VAT = 0.18;
const int currentyear = 2023;
//void displayContent(Person p);

struct Person{
    int age;
    char name[50];
    float salary;
    float salary_tax;
    int year_of_birth;
};
void display(Person p){
    cout << "Customer: " << p.name << endl;
    cout << "Y.O.B: " << p.year_of_birth <<endl;
    cout << "Salary: " << p.salary << endl;
    cout << "Tax: "<< p.salary_tax << endl;
}

int main()
{
    
    Person customer;
    cout << "Enter name: ";
    cin.getline(customer.name, 50);
    cout << "Enter salary: ";
    
    cin >> customer.salary;
    cout << "Enter age: ";
    cin  >> customer.age ; 

    customer.salary_tax = customer.salary * VAT;
    customer.year_of_birth = currentyear - customer.age;

    display(customer);

}