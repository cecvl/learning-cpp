#include<iostream>
using namespace std;

int main()
{
    int arr[] = {125, 3525,34,80,78,87};
    int newarr;
    
    /*
    cout<<"Enter a number and your name: ";
    cin>>newarr>>name;
    cout<<"Number is: "<<newarr<<endl;
    cout<<"Name is: "<<name<<endl;
    */
   cout<<"Enter marks: ";
   cin>>newarr;

   if(newarr>=0){
    if(newarr<=65){
        cout<<"Grade : D";
    }else if(newarr>65 && newarr<=75){
        cout<<"Grade : C";
    }else if(newarr>75 && newarr<=90){
        cout<<"Grade : B";
    }else if(newarr>90 && newarr<=100){
        cout<<"Grade : A";
    }else{
        cout<<"ENTER VALID MARKS";
    }
   }

    return 0;
}