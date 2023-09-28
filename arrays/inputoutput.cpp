#include <iostream>
using namespace std;
int main(){
    int numbers[5], sum, average, sciences;
    cout<<"Enter marks: ";
    for(int i=0;i<5;++i){
        cin>>numbers[i];
    }
    sciences=numbers[2]+numbers[3];
    cout<<"Sciences: " << sciences << endl;
    for(int i=0; i<5;i++){
        sum += numbers[i];
    }
    average= sum/5;
    cout << "Average Mark: " << average;
}