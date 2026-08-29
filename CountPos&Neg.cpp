#include<iostream>
using namespace std ;

void countPosNeg(int arr[], int n) {
    int POS = 0;
    int NEG = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            POS++;
        } else if (arr[i] < 0) {
            NEG++;
        }
    }
    int ZERO = n - (POS + NEG);

    cout << "POS : " << POS << endl;
    cout << "NEG : " << NEG << endl;
    cout << "ZERO : " << ZERO << endl;
}

int main() {
    int arr[] = {-1, 2, 0, -3, 4, 5, -6, 0, 7, -8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    countPosNeg(arr, n);
}
