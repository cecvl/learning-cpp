#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    fstream trialone("trialone.txt", ios::app); //ios::out to create a new file
    if (!trialone){
        cout << "Error opening file" << endl;
        
    }else{
        cout << "File opened successfully" << endl;
        trialone << "Hello World" << endl;
        trialone.close();
    }
    //trialone.close();
}