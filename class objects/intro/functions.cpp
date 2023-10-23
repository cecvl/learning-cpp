#include <iostream>
using namespace std;

class Student {

   public:
    double marks;
    char name [20];

    // constructor to initialize marks
   /* Student(double m) {
        marks = m;
    } */
};


void calculateAverage(Student s1, Student s2) {

    // calculate the average of marks of s1 and s2 
    double average = (s1.marks + s2.marks) / 2;

   cout << "Average Marks = " << average << endl;

}

int main() {
    //Student student1(88.0), student2(56.0);
    
   //calculateAverage(student1, student2);
    Student student1, student2;
    cout << "Enter marks & name for student 1: ";
    cin >> student1.marks >> student1.name  ;
    cout << "Enter marks & name for student 2: ";
    cin >> student2.marks >> student2.name;

    cout << "Average Marks = " << (student1.marks + student2.marks) / 2 << endl;

    return 0;
}