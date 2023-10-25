#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Enter the number of items: \n";
    cin >> n;

    // Declaration and dynamic allocation of an integer array
    int *arr = new int[n];

    cout << "Enter " << n << " items: " << endl;
    for (int x = 0; x < n; x++) {
        cin >> *(arr + x);
    }

    cout << "You entered: ";
    for (int x = 0; x < n; x++) {
        cout << *(arr + x) << " ";
    }

    for (int x = 0; x < n; x++) {
        sum += *(arr + x);
    }

    cout << "\nSum = " << sum << endl;

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}
