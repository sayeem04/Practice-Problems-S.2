#include<iostream>
using namespace std;


int countOccurrences(int arr[], int size, int num) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    return count;
}

int main() {
    int number[] = {1, 1, 1, 2, 2, 5, 0, 0, 4};
    int target = 1;
    int n = sizeof(number) / sizeof(number[0]);
    int count = countOccurrences(number, n, target);
    cout << "Counted Occurrences of the Number 1 is : " << count;
}
