#include <iostream>
#include <fstream>
#include <vector> //learn use of vector
#include <limits>

using namespace std;

struct Medicine{
    int ID;
    string Name;
    string Manufacturer;
    int expiry_day;
    int expiry_month;
    int expiry_year;
};

Medicine type[3]; //global array of struct

void Input_MedicineArray();
void Write_MedicineArray_To_File();

int main()
{
    Input_MedicineArray();
    Write_MedicineArray_To_File();
}

void Input_MedicineArray()
{
for(int i = 0; i < 3; i++){
    cout << "Enter ID: ";
    cin >> type[i].ID;

    //allow input of multi-word strings
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter Name: ";
    getline(cin, type[i].Name);

    cout << "Enter Manufacturer: ";
    getline(cin, type[i].Manufacturer);

    cout << "Enter expiry day: ";
    cin >> type[i].expiry_day;
    cout << "Enter expiry month: ";
    cin >> type[i].expiry_month;
    cout << "Enter expiry year: ";
    cin >> type[i].expiry_year;
    cout << endl;
}
}

void Write_MedicineArray_To_File()
{
    vector<Medicine> medicine = {
        {type[0].ID, type[0].Name, type[0].Manufacturer, type[0].expiry_day, type[0].expiry_month, type[0].expiry_year},
        {type[1].ID, type[1].Name, type[1].Manufacturer, type[1].expiry_day, type[1].expiry_month, type[1].expiry_year},
        {type[2].ID, type[2].Name, type[2].Manufacturer, type[2].expiry_day, type[2].expiry_month, type[2].expiry_year}
    };
    ofstream file_obj("pharmacy.csv", ios::app);

    if(!file_obj){
        cout << "Error opening file" << endl;
    }else{
        cout << "File opened successfully" << endl;
    }

    file_obj << "ID,Name,Manufacturer,Day,Month,Year" << endl;

    //use ranged for loop
    for(const Medicine& entry : medicine){
        file_obj << entry.ID << "," << entry.Name << "," << entry.Manufacturer << "," << entry.expiry_day << "," << entry.expiry_month << "," << entry.expiry_year << endl;
    }

    file_obj.close();
}
    