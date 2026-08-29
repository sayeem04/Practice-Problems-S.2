#include <iostream>
using namespace std;

int findMinimum(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[] = {2, 5, 3, 55, 23, 111, 23, 200};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findMinimum(arr, n);
}
