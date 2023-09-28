#include <iostream>
using namespace std;
typedef struct{
    char name[20];
}Student;
void display();
int main ()
{
    Student first_year;
    int num;
    cout << "Enter your name: ";
    cin >> first_year.name;

    if(num > 0){
        cout << "Positive number";
    }else{
        cout << "Negative number";
    }
}
void dislay()
{
    cout << "";
}