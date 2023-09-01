#include <iostream>
using namespace std;

int main(){
    //double numbers[] = {224,242,575,9785,462,2572};
    double sum = 0;
    double count = 0;
    double average;

    double numbers[5];

    cout << "Enter 5 numbers: " << endl;

    for (int i = 0; i < 5; ++i){
        cin >> numbers[i] ;
    }

    for ( double &n : numbers){
        cout << n << " ";

        sum += n;

        count++;    
    }
    average = sum/count;

    cout << endl << "Sum = " << sum;
    cout << endl << "Average = " << average ;
    return 0;
}