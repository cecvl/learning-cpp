#include <iostream>
using namespace std;

const int CURRENT_YEAR = 2023;//alternative:use ctime 

class Person{
private:
    string name;
    int YOB , age;

public:
    Person(const string& personName, int yearOfBirth){
        name = personName;
        YOB = yearOfBirth;
        getAge();
    }
    void setName(const string& personName){
        name = personName;
    }
    string getName() const{
        return name;
    }
    void setYOB(int yearOfBirth){
        YOB = yearOfBirth;
    }
    int getYOB() const{
        return YOB;
    }
    int getAge() const{
        return CURRENT_YEAR - YOB;
    }
    virtual void printinfo(){
        cout << "Name: " << getName() << endl;
        cout << "Year of Birth: " << getYOB() << endl;
        cout << "Age: " << getAge() << endl << endl;
    }
};
class Student:public Person{
    private:
        int StuID;
        int nos; //number of Students
        string major;
    public:
        Student(const string& personName, int yearOfBirth,
         int studentID, int numofstudents, const string&
          currentmajor):Person(personName, yearOfBirth), nos(numofstudents){
            StuID = studentID;
            //nos++; //keep track of number of students
            major = currentmajor;
        }
        void setStuID(int studentID){
            StuID = studentID;
        }
        int getStuID() const{
            return StuID;
        }
        void setnos(int numofstudents){
            nos = numofstudents;
        }
        int getnos() const{
            return nos;
        }
        void setmajor(const string& currentmajor){
            major = currentmajor;
        }
        string getmajor() const{
            return major;
        }

        void printinfo() override{
            cout << "Name: " << getName() << endl; //inheritance from Person class
            cout << "Year of Birth: " << getYOB() << endl;
            cout << "Age: " << getAge() << endl;
            cout << "Student ID: " << getStuID() << endl;
            cout << "Number of Students: " << getnos() << endl;
            cout << "Major: " << getmajor() << endl << endl;
        }
};

int main()
{
    Person student1("John", 2000);
    cout << "Initial info(Person):" << endl; 
    student1.printinfo();

    cout << "Updated info(Person):" << endl;
    student1.setName("John Smith");
    student1.setYOB(1999);
    student1.printinfo();

    Student student2("Mary", 2001, 123456, 1, "Computer Science");
    cout << "Initial info(Student):" << endl;

    student2.printinfo();

    cout << "Updated info(Student):" << endl;
    student2.setName("Mary Smith");
    student2.setYOB(2000);
    student2.setStuID(123457);
    student2.setnos(2);
    student2.setmajor("Computer Engineering");
    student2.printinfo();

    
}