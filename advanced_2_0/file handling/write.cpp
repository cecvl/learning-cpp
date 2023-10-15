#include <iostream>
#include <fstream>
//#include <string>

using namespace std;
int main()
{
    fstream trialtwo; //object of fstream class
    /*
    char name[30];
    cout << "Enter your name: ";
    gets(name);
    */
   
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    
        
    trialtwo.open("trialtwo.csv", ios::app); //open file in write mode
    /*or use:
    fstream trialthree("trialthree.csv", ios::out);
    */
    if (!trialtwo){
        cout << "Error opening file" << endl;
        
    }else{
        cout << "File opened successfully" << endl;
        trialtwo << name << endl;
        trialtwo.close();
    }
}