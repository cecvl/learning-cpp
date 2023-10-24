#include <iostream>
using namespace std;

class FamilyName
{
public:
    void displayLastName()
    {
        cout << "\nMy last name is Kent." << endl;
    }
    
};

class Mother : public FamilyName
{
private:
    string MaidenName = "My Maiden name is Clark.\n"; 
    string Nickname = "My nickname is Pooky.\n";
    
public: 
    // Function to access private member
    void displayMaidenName()
    {
        cout << MaidenName;
    }
};

class Daughter : public FamilyName
{
protected:
    string FirstName;

public:
    // Constructor to initialize the first name
    Daughter(const string& firstName) : FirstName(firstName)
    {
    }

    // Function to access protected member
    void displayFirstName()
    {
        cout <<"I'm "<< FirstName << ".";
    }
};

int main()
{
    string daughterFirstName;
    cout << "Enter the daughter's first name: ";
    cin >> daughterFirstName;

    Mother m1;
    Daughter d1(daughterFirstName);

    cout << "\nMom said, ";
    m1.displayLastName();
    m1.displayMaidenName();

    cout << "\nDaughter said, ";
    d1.displayFirstName();
    d1.displayLastName();

    return 0;
}
