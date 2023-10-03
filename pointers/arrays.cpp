#include <iostream>
using namespace std;
//ptr = &arrmarks[0];
//int addmarks(*ptr);
/*
int addmarks(*ptr){

};*/
int main()
{
    int arrmarks[4];

   
    int *ptr;  // declare pointer variab
    
    cout << "Displaying address using arrays: \n"<< endl;

    //&arrmarks[i] 
    for (int i = 0; i < 4; ++i)
    {
        cout << "Address of arr" <<"[" << i << "] = " << &arrmarks[i] << endl;
    }

    // ptr = &arrmarks[0]
    ptr = arrmarks; //points to first element of array arrmarks

    cout << "\nEnter marks : " ;
    //*(arrmarks + i)
    for(int i = 0; i < 4; ++i){
        cin >> *(arrmarks + i);
    }
    
    //cout<<"\nDisplaying address using pointer  notation: "<< endl;
    //ptr + 1
    /*
    for (int i = 0; i < 4; ++i)
    {
        cout << "\n\tAddress of arrmarks" << "["<< i << "] = " << ptr + i << endl;
    }
    

    //values of addresses
    for (int i = 0; i < 4; ++i){
        cout << "Value of arrmarks" <<"[" << i << "] = " << *(arrmarks + i) << endl;
    }
    */
   //using for ranged loop
   int i = 0;
   for (int value : arrmarks){
    cout <<  "Value of arrmarks[" << i << "] = " << value << endl;
    i++; //++i
        }

    return 0;
}