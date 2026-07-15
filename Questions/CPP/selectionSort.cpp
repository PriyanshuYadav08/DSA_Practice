#include <bits/stdc++.h>
using namespace std;

// find min, swap with the first element in the array
// Time complexity: O(n^2)

void conv(int a[], int sizeA){
    for (int i=0; i<sizeA-1; i++){
        int min_ele = i;
        for (int j=i+1; j<sizeA; j++){
            if (a[j]<a[min_ele]){
                min_ele = j;
            }
        }
        swap(a[i], a[min_ele]);
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