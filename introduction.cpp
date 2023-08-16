#include<iostream>
using namespace std;

void add(int m1,int m2){
    cout<<(m1 + m2);
}

int main()
{
    
    int arr[] = {125, 3525,34,80,78,87};
    add(arr[0], arr[1]);

    /*
    
    int even = 0;
    int odd = 0;

    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<length; i++)
    {
        if(arr[i]%2==0){
            even++;
        }else{
            odd++;
        }
        cout<<"Even numbers : "<<even<<endl;
        cout<<"Odd numbers : "<<odd;
    }
    */
    return 0;
}