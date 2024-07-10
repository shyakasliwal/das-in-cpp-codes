
#include <iostream>
using namespace std;

void frequency(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 1; // Initialize count for each element
        while (i < n - 1 && arr[i] == arr[i + 1]) {
            count++;
            i++; // Move to the next consecutive element
        }
        cout << arr[i] << ": " << count << endl;
    }
}

int main() {
    int n = 6;
    int arr[] = {10, 10, 10, 20, 30, 30};
    frequency(arr, n);
    
}