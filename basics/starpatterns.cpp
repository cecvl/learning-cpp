#include <iostream>
using namespace std;

//nested for loop

int main(){

    int lines = 5;

   for (int i = 1 ; i < lines ; ++i){
         for (int j = 1 ; j <= i ; ++j){ // j = 1, 2, 3, 4, 5
              cout << "*";
         }
         cout << endl;
   }
    
}