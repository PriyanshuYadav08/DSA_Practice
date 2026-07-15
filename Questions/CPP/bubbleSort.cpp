#include <bits/stdc++.h>
using namespace std;

// compare with he adjacent numbers if the first number is greater than the second number then swap them
// Time complexity: O(n^2)

void conv(int a[], int sizeA){
    for (int i=0;i<sizeA-1;i++){
        for (int j=0;j<sizeA-i-1;j++){
            if (a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}

int main(){
    int a[]={2,4,6,8,10,1,3,5,7,9,0};
    int sizeA = sizeof(a)/sizeof(a[0]);
    
    conv(a,sizeA);
    
    for (int i=0;i<sizeA;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}