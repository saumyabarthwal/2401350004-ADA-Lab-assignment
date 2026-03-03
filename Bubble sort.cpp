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
        for (int j = 0; j < n - i - 1; j++) {
            steps++; // comparison arr[j] > arr[j+1]
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                steps++; 
            }
        }
    }

   
    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    
    cout << "Total steps taken: " << steps << endl;

    return 0;
}
