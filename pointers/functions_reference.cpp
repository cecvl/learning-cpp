#include <iostream>
using namespace std;

//Function declaration
int area(int* , int*);
float calcVolume(int*, int* ,float*);

int main()
{
    int a, b;
    float c;
    cout << "Enter values a & b & c : ";
    cin >> a >> b >> c;

    cout << "Area = " << area(&a, &b);
    cout << "\nVolume = " << calcVolume(&a,&b,&c);

}
//Function definition
int area(int* x, int* y){
    return *x * *y;
}
float calcVolume(int* a,int* b,float* c){
    return *a * *b * *c;
}