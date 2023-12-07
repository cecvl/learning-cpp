#include <iostream>
using namespace std;

int main(){
    int marks[5];
    float sum = 0, average,percentage;

    cout << "Enter marks: " << endl;
    for(int i = 0; i < 5; i++){
        cin >> marks[i];
    }
    //Find sum
    for(int i = 0; i < 5; i++){
        sum += marks[i];
    }

    average = sum / 5;
    //percentage = (sum / 500) * 100;
    cout << "Average: " << average << endl;    
}