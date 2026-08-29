#include<iostream>
using namespace std;

void average(int arr[], int n) {
    int sum = 0;
    double average = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    average = sum / (n * 1.0);
    cout << "Average is " << average << endl;
}


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    average(arr, n);



}
