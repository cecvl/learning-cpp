#include <iostream>
using namespace std;

int main()
{
    int marks[5], sum = 0, average;

    cout << "Enter five marks: ";
    for(int i = 0; i < 5 ; ++i){
        cin >> marks[i];
    }
    for(int i = 0; i < 5 ; ++i){
        sum += marks[i];
    }

    average = sum/5;

    cout << "AVERAGE : " << average;
}