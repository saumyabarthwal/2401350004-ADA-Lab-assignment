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

    
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        steps++; 

       
        while (j >= 0 && arr[j] > key) {
            steps++; // comparison arr[j] > key
            arr[j + 1] = arr[j];
            steps++;
            j--;
        }
        if (j >= 0) steps++; 
        arr[j + 1] = key;
        steps++; 
    }


    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

  
    cout << "Total steps taken: " << steps << endl;

    return 0;
}
