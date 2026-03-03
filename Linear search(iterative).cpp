#include <iostream>
using namespace std;

int stepCount = 0;

int linearSearchIterative(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        stepCount++;  
        if (arr[i] == target)
            return i;
    }
    return -1; 
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int target;
    cout << "Enter target to search: ";
    cin >> target;

    int index = linearSearchIterative(arr, n, target);
    if (index != -1)
        cout << "Target found at index " << index << endl;
    else
        cout << "Target not found" << endl;

    cout << "Step Count = " << stepCount << endl;
    return 0;
}
