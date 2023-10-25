#include <iostream>
using namespace std;

int main()
{
    int *stars = NULL;
    stars = new int;
    /*  Combine declaration of pointer
        and their assignment 
    */ 
    //int *stars = new int;
    *stars = 5000;
    cout << "visible stars in te sky "<< *stars;
    delete stars; //stack memory deallocated
    cout << "\n garbage value:  "<< *stars;
    /*
    shows random values(gabbage) because the memory was deallocated*/
    //stars = nullptr;//pointer is not valid(NULL)
    stars = NULL;
    return 0; 
}