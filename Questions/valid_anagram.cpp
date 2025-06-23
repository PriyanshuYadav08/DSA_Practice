#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool check(string a, string b){
    if (a.length() != b.length()) return false;
        int count[26] = {0}; 
        for (int i = 0; i < a.length(); i++) {
            count[a[i] - 'a']++;
            count[b[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0)
                return false;
        }
        return true;
}

int main() {
    string a,b;
    cout<<"Enter the first string = ";
    cin>>a; 
    cout<<"Enter the second string = ";
    cin>>b;
    if (check(a,b)) cout<<"true"<<endl;
    else cout<<"false"<< endl;
    return 0;
}