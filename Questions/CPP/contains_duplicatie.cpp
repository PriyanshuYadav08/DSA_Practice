#include <bits/stdc++.h>
using namespace std;

bool check(int arr[], int n) {
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the number of elements = ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the element = ";
        cin >> arr[i];
    }
    if (check(arr, n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}