void Input_MedicineArray()
{
for(int i = 0; i < 3; i++){
    cout << "Enter ID: ";
    cin >> type[i].ID;
    cout << "Enter Name: ";
    //cin >> type[i].Name;
    getline(cin, type[i].Name);
    cout << "Enter Manufacturer: ";
    //cin >> type[i].Manufacturer;
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