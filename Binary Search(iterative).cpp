#include <iostream>
using namespace std;

int stepCount = 0;


int binarySearchIterative(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        stepCount++;  
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid; 
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; 
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

    int index = binarySearchIterative(arr, n, target);
    if (index != -1)
        cout << "Target found at index " << index << endl;
    else
        cout << "Target not found" << endl;

    cout << "Step Count = " << stepCount << endl;
    return 0;
}
