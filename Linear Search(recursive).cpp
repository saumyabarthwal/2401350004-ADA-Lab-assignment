#include <iostream>
using namespace std;

int stepCount = 0;

int linearSearchRecursive(int arr[], int size, int target, int index = 0) {
    stepCount++;  
    if (index >= size)
        return -1;  
    if (arr[index] == target)
        return index; 
    return linearSearchRecursive(arr, size, target, index + 1);
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

    int index = linearSearchRecursive(arr, n, target);
    if (index != -1)
        cout << "Target found at index " << index << endl;
    else
        cout << "Target not found" << endl;

    cout << "Step Count = " << stepCount << endl;
    return 0;
}
