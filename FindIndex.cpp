#include<iostream>
using namespace std;

int findIndex(int arr[], int n, int target) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = true;
            return i;
        }
    }
    if (!found) {
        cout << "Not found" << endl;
        return -1;
    }
}

int main() {
    int arr[] = {2, 4, 6, 8, 9, 0, 11, 22, 33, 44, 55};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter target: ";
    cin >> target;
    int index = findIndex(arr, n, target);
    cout << index << endl;
}
