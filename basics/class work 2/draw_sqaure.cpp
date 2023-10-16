//use nested for loop

#include <iostream>
using namespace std;

void Draw_Square();

int side_length;
char symbol;

int main(){
    Draw_Square();
}

void Draw_Square(){
    cout << "Enter side length: ";
    cin >> side_length;
    cout << "Enter symbol(single character): ";
    cin >> symbol;

    for (int i = 0; i < side_length; i++){
        for (int j = 0; j < side_length; j++){
            cout << symbol << " ";
        }
        cout << endl;
    } 

} 