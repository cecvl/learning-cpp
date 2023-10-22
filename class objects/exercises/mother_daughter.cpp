#include <iostream>
using namespace std;

class Mother
{
    public:
        void display(){
            cout << "I'm a Kent too." << endl;
            }
};

class Daughter: public Mother
{
    public:
        void display(){
            cout << "I'm Mary." << endl;
            }
};

int main()
{
    Daughter d1;
    Mother m1;
    cout << "Mother said, " ;
    m1.display();
    cout << "\nDaughter said, " ;
    d1.display();
    d1.Mother::display();
}