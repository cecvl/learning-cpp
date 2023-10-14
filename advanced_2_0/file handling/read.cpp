#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    ifstream trialtwo("trialtwo.csv");
    if (!trialtwo){
        cout << "Error opening file" << endl;
    }else{
        cout << "File opened successfully" << endl;
        char buffer[200];
        trialtwo.read(buffer, 200);
        cout << buffer << endl;
        trialtwo.close();
    }

    
}