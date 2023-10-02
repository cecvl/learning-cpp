#include <iostream>
using namespace std;

int main(){
    int* pointnum, num;
    num = 45;
    pointnum = &num; //store address of num in pointnum -> important
    
    cout << "Value of num = " << *pointnum << endl; //points to value stored in num
    cout << "Address of num = " << pointnum << endl; //address stored in pointnum

    *pointnum = 100; 
    cout << "New value of num = " << num << endl; //value of num changed
    cout << "address of pointnum = " << pointnum << endl; //address of pointnum unchanged 
    
}