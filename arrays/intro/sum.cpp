#include <iostream>
using namespace std;

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += arr[i]; //adding each element of array to sum
    }
    cout << "Sum of array elements: " << sum << endl;
}