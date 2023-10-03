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

    // ptr = &arrmarks[0] - points to first element of array arrmarks
    ptr = arrmarks;

    cout << "\nEnter marks : " ;
    /* 
    *(arrmarks + i)
    for(int i = 0; i < 4; ++i){
        cin >> *(arrmarks + i);
    }
    */
    int j = 0;
    while(j < 4){
        cin >> *(arrmarks + j);
        ++j;
    }
    //Display data using while loop
    int i = 0;
    while(i < 4){
        cout << "Value of arrmarks[" << i << "] = " << *(arrmarks + i) << endl;
        i++; // Increment index
    }
}