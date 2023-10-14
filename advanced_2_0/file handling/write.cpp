#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    fstream trialtwo; //object of fstream class
    trialtwo.open("trialtwo.csv", ios::out); //open file in write mode
    /*or use:
    fstream trialthree("trialthree.csv", ios::out);
    */
    if (!trialtwo){
        cout << "Error opening file" << endl;
        
    }else{
        cout << "File opened successfully" << endl;
        trialtwo << "Christian Cecil";
        trialtwo.close();
    }
}