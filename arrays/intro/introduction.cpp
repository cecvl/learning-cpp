#include<iostream>
using namespace std;

void add(int m1,int m2){
    cout << (m1 + m2) << endl;
    cout << "success" << endl;
}

int main()
{
    
    int arr[] = {125, 3525,34,80,78,87};
    int newarr;
    bool result; //return true(1) or false(0)
    string name;

    //add(arr[0], arr[1]);
    /*
    cout << "Enter a number and your name: ";
    cin >> newarr >> name;
    cout << "Number is: " << newarr << endl;
    cout << "Name is: " << name << endl;
    */


    result = (arr[1] > arr[2]);
    if(result == 1)
    {
        cout << "arr[1] is larger than arr[2]" << endl;
    }else{
        cout << "arr[2] is larger than arr[1]" << endl;
    }; 

    
    int even = 0;
    int odd = 0;
    
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<length; i++)
    {
        if(arr[i]%2!=1){
            even++;
        }else{
            odd++;
        }   
    }

    cout << "Even numbers : " << even << endl;
    for(int i=0; i<arr[i]; i++)
    {
        if(arr[i]%2==0){
            cout << arr[i] << endl;
        };
    }
    
    cout << "Odd numbers : " << odd << endl;
    for(int i=0; i < arr[i]; i++)
    {
        if(arr[i]%2==1){
            cout << arr[i] << endl;
        }
    }
    
    return 0;
}