#include <iostream>
using namespace std;


void findMinMax(int arr[], int n, int &minVal, int &maxVal, int &steps) {
    if (n == 0) return;

    minVal = arr[0];
    maxVal = arr[0];
    steps = 0;

    for (int i = 1; i < n; i++) {
        steps++; // comparison for min
        if (arr[i] < minVal)
            minVal = arr[i];

        steps++; // comparison for max
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0) {
        cout << "Array size must be positive." << endl;
        return 0;
    }

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int minVal, maxVal, steps;
    findMinMax(arr, n, minVal, maxVal, steps);

    cout << "Minimum value: " << minVal << endl;
    cout << "Maximum value: " << maxVal << endl;
    cout << "Total comparisons: " << steps << endl;

    return 0;
}
