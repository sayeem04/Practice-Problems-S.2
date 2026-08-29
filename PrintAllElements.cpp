#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the sie of the Array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Output : " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
