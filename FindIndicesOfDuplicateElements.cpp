#include<iostream>
using namespace std;

int leftBound(int arr[], int n, int target) {
    int left = 0, right = n - 1, result = -1;

    while (left <= right) {
        int mid = right + (left - right) / 2;
        if (arr[mid] == target) {
            result = mid;
            right = mid - 1;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int rightBound(int arr[], int n, int target) {
    int left = 0, right = n - 1, result = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            result = mid;
            left = mid + 1;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

int main() {
    int arr[] = {1, 2, 3, 4, 4, 4, 4, 4, 5, 6, 7, 8, 9};

    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 4;
    int first = leftBound(arr, n, 4);
    int second = rightBound(arr, n, 4);
    if (first == -1) {
        cout << "Not Found " << endl;
    } else {
        cout << "First Occurence: " << first << endl;
        cout << "Second Occurence: " << second << endl;
    }
}
