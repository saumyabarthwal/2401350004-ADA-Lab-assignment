#include <iostream>
using namespace std;

int stepCount = 0;


int binarySearchRecursive(int arr[], int left, int right, int target) {
    stepCount++;  
    if (left > right)
        return -1;  

    int mid = left + (right - left) / 2;

    if (arr[mid] == target)
        return mid;  // Found
    else if (arr[mid] < target)
        return binarySearchRecursive(arr, mid + 1, right, target);
    else
        return binarySearchRecursive(arr, left, mid - 1, target);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements in sorted order: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int target;
    cout << "Enter target to search: ";
    cin >> target;

    int index = binarySearchRecursive(arr, 0, n - 1, target);
    if (index != -1)
        cout << "Target found at index " << index << endl;
    else
        cout << "Target not found" << endl;

    cout << "Step Count = " << stepCount << endl;
    return 0;
}
