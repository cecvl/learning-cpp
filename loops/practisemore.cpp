#include <iostream>
using namespace std;

//check the largest of three numbers
int main()
{
    int a,b,c;

    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    /*cout<<"a is "<<a<<endl<<"b is "<<b<<endl<<"c is "<<c;

    if(a >= b && a >= c){
        cout<<"largest is "<<a;
    }else if(b >= a && b >=c){
        cout<<"Largest is "<<b;
    }else{
        cout<<"Largest is "<<c;
    }

   //using nested loop ex.1
   if(a > c || b > c){
        if(a > b){
            cout<<"Largest is "<<a;
        }else{
            cout<<"Largest is "<<b;
        }
    }else{
        cout<<"Largest is "<<c;
     }
     */
    //using nested loop ex.2
    if(a > b){
        if(a > c){
            cout<<"Largest is "<<a;
        }else{
            cout<<"Largest is "<<c;
        }
    }else{
        if(b > c){
            cout<<"Largest is "<<b;
        }
        else{
            cout<<"largest is "<<c;
        }
    }

    return 0;
}