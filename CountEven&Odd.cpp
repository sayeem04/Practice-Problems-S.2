#include<iostream>
using namespace std;

void countEvenOdd(int arr[], int n) {
    int odd = 0;
    int even = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            odd++;
        } else {
            even++;
        }
    }
    cout << "Odd : " << odd << endl;
    cout << "Even : " << even << endl;
}


int main() {
    int arr[] = {-2, -1, 2, 3, 4, 5, 12, 13, 14, -7};
    int n = sizeof(arr) / sizeof(arr[0]);
    countEvenOdd(arr, n);
}
