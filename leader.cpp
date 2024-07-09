#include <iostream>
using namespace std;

int leader(int arr[], int n) {
     int currentleader = arr[n - 1];
     cout<<currentleader; // beacuse last element is always leader.
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > currentleader) {
            currentleader = arr[i];
            cout<<currentleader;
        }
    }
}

int main() {
    int n = 7;
    int arr[] = {7, 10, 4, 10, 6, 5, 2};
    leader(arr, 7);
    return 0;
}
