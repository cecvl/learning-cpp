#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    fstream trialone; //object of fstream class
    trialone.open("trialone.txt", ios::out);
    if (!trialone){
        cout << "Error opening file" << endl;
        
    }else{
        cout << "File opened successfully" << endl;
        trialone.close();
    }
    //trialone.close();
}