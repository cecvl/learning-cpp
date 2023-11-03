/*  Calculate the sum, 
    average & percentage of 10 students' marks.
    Use class and arrays to implement.    
*/
#include<iostream>
using namespace std;

class Student{
    public:
    int marks[10];
    int sum = 0;
    float average;
    float percentage;
    void input(){
        cout << "Enter marks: " << endl;
        for(int i = 0; i < 10; i++){
            cin >> marks[i];
        }
    };
    void calculate(){
        for(int i = 0; i < 10; i++){
            sum += marks[i];
        }
        average = sum / 10.0;
        //percentage = average;
        percentage = average / 100.0 * 100;
    };
    void display(){
        cout << "Sum: " << sum << endl;
        cout << "Average: " << average << endl;
        cout << "Percentage: " << percentage << endl;
    };
};

int main(){
    Student s1;
    s1.input();
    s1.calculate();
    s1.display();
}