#include <iostream>
using namespace std;

class Area{
    public:
    void length(){
        cout << "\nI have length";
    }
    void width(){
        cout << "\nI have width";
    }
};
class Volume: public Area{
    public:
    void height(){
        cout << "\nI have height";
    }    
};

int main(){
    Area item1;
    Volume item2;

    cout << "\nItem 1 : " << item1.length();
    cout << "\nItem 1 : " << item1.width();
    item2.height();
    item2.length();
}