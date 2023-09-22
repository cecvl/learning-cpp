#include <iostream>
using namespace std;

const double VAT = 0.19;
int main()
{
    double price_aftertax, price_beforetax , sales_tax;

    cout << "Enter price of product: ";
    cin >> price_beforetax;
    sales_tax = price_beforetax * VAT;
    //cout << "Tax to be paid: " << sales_tax;
    //price_aftertax = price_beforetax + sales_tax;
    cout <<  "Amount to be paid: " <<  price_beforetax + sales_tax;
 
}