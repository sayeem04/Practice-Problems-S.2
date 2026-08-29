#include<iostream>
using namespace std;

void findElement(int arr[], int size, int target) {
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            found = true;
            break ;
        }
    }
    if (found == true) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }
}

int main() {
    int arr[] = {2, 12, 11, 23, 45, 67, 89, 45, 64, 19, -3, -34,};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter target number: ";
    cin >> target;
    findElement(arr, size, target);
}
