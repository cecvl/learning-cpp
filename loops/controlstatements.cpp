#include<iostream>
using namespace std;

int main()
{
    //int arr[] = {125, 3525,34,80,78,87};
    int num, sum, product;
    sum = 0;
    
    cout<<"Enter a number: ";
    cin>>num;

    for(int i=1; i<=num; i++)
    {   cout<<i<<" ";        
        sum += i;
     }
    cout<<"Sum of  from 1 to "<<num<<" is "<<sum;
    
   //Find the factorial of a given number
   product = 1;
   cout << "Enter a number: ";
   cin >> num;

   for(int i = 2; i <= num; i++) //you can initialize to 1 or 2
   {
    cout << i << " ";
    product *= i;
   }
   cout << "Factorial of " << num << " is " << product;
   

    return 0;
}