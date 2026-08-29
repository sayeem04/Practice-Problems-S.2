#include <iostream>
using namespace std;

int findMaximum(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {2, 5, 3, 55, 23, 111, 23, 200};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findMaximum(arr, n);
}
