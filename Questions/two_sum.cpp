#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout<<"array size = ";
    cin>>n;
    int arr[n];
    int sum_to_find;
    cout<<"enter the sum to find = ";
    cin>>sum_to_find;
    for (int i=0;i<n;i++){
        cout<<"enter the array element = ";
        cin>>arr[i];
    }
    
    //O(n**2) time complexity solution 😭
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum_to_find) {
                cout<<i<<", "<<j<<endl;
            }
        }
    }
    return 0;
}