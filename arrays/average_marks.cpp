#include <iostream>
using namespace std;

int main()
{
    int marks[5], sum = 0, length = 0, _average;
    //length = sizeof(marks[5]/marks[1]);

    cout << "Enter five marks: ";
    for(int i = 0; i < 5 ; ++i){
        cin >> marks[i];
    }
    for(int i = 0; i < 5 ; ++i){
        sum += marks[i];
    }

    _average = sum/5;

    cout << "AVERAGE : " << _average;
}