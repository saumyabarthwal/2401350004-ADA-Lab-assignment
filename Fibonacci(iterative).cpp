#include <iostream>
using namespace std;

int stepCount = 0;

long long fibonacciIterative(int n) {
    stepCount++; 

    if (n <= 0) return 0;
    if (n == 1) return 1;

    long long a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        stepCount++;       
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    long long result = fibonacciIterative(n);
    cout << "Fibonacci(" << n << ") = " << result << endl;
    cout << "Step Count = " << stepCount << endl;

    return 0;
}
