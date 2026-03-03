#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int steps = 0; 

    
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        steps++;

        for (int j = i + 1; j < n; j++) {
            steps++; // comparison arr[j] < arr[minIdx]
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
                steps++; 
            }
        }

        if (minIdx != i) {
            swap(arr[i], arr[minIdx]);
            steps++; 
        }
    }

    
    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    
    cout << "Total steps taken: " << steps << endl;

    return 0;
}
