//how to work with fractions?

#include <iostream>
using namespace std;

int main() {
    double sum = 0.0;

    for (double i = 1.0; i <= 31.0; i += 3.0) {
        sum += 1.0 / i;
    }

    cout << "Sum of the series: " << sum << endl;

    return 0;
}


