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
    protected:
    void half_height(){
        cout << "\nI can have half height";
    }
};
class Volume: public Area{
    public:
    void height(){
        cout << "\nI have height";
        half_height();
    };
};
class Sphere: public Volume{
    public:
    void radius(){
        cout << "\nI have radius";
    }
};

int main(){
    Area item1;
    Volume item2;
    Sphere item3;

    cout << "\nItem 1 : ";
    item1.length();
    item1.width();
    //item1.half_height();
    cout << "\nItem 2 : ";
    item2.length();
    item2.width();
    item2.height();
    
    cout << "\nItem 3 : ";
    item3.length();
    item3.width();
    item3.height();
    item3.radius();
}