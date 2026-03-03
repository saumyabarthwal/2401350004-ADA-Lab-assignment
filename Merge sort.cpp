#include <iostream>
using namespace std;


void merge(int arr[], int left, int mid, int right) {
    if (left > mid || mid + 1 > right)
        return;

   
    if (arr[mid] <= arr[mid + 1])
        return;

    
    if (arr[left] <= arr[mid + 1]) {
        merge(arr, left + 1, mid, right);
    } 
    else {
        
        int value = arr[mid + 1];
        int index = mid + 1;

        while (index > left) {
            arr[index] = arr[index - 1];
            index--;
        }

        arr[left] = value;

        
        merge(arr, left + 1, mid + 1, right);
    }
}


void mergeSort(int arr[], int left, int right) {
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

int main() {
    int arr[] = {34, 27, 48, 3, 9, 67, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
