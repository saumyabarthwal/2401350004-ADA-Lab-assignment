#include <iostream>
using namespace std;

int stepCount = 0;

long long factorial(int n) {
    stepCount++;  

    if (n <= 1) {
        return 1;  
    }

    return n * factorial(n - 1);  
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        long long result = factorial(n);
        cout << "Factorial = " << result << endl;
        cout << "Step Count = " << stepCount << endl;
    }

    return 0;
}
