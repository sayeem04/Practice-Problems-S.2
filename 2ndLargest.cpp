#include <iostream>
using namespace std;

int main() {
    int n, largest, second;
    int foundSecond = 0;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    largest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];

        }
    }
    cout << "Largest element is " << largest << endl;

    for (int i = 0; i < n; i++) {
        if (arr[i] != largest) {
            second = arr[i];
            foundSecond = 1;
            break;
        }
    }
    if (foundSecond == 0) {
        cout << "No second largest distinct element " << endl;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] != largest && arr[i] > second) {
            second = arr[i];
        }
    }

    cout << "Second largest element is " << second << endl;
}
