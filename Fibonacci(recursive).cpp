#include <iostream>
using namespace std;

int stepCount = 0;

long long fibonacciRecursive(int n) {
    stepCount++;  

    if (n <= 0) return 0;    
    if (n == 1) return 1;    

    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    long long result = fibonacciRecursive(n);
    cout << "Fibonacci(" << n << ") = " << result << endl;
    cout << "Step Count = " << stepCount << endl;

    return 0;
}
