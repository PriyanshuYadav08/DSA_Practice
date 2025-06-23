#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> map;

    for (string s : strs) {
        int count[26] = {0};
        for (char c : s) {
            count[c - 'a']++;
        }
        string key = "";
        for (int i = 0; i < 26; i++) {
            key += to_string(count[i]) + "#";
        }
        map[key].push_back(s);
    }
    
    vector<vector<string>> result;
    for (auto& pair : map) {
        result.push_back(pair.second);
    }

    return result;
}

int main() {
    int n;
    cout << "number of strings = ";
    cin >> n;
    
    vector<string> strs(n);
    
    cout << "the strings = \n";
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    vector<vector<string>> grouped = groupAnagrams(strs);

    cout << "\nGrouped Anagrams = \n";
    for (auto group : grouped) {
        for (auto word : group) {
            cout << word << " ";
        }
        cout << endl;
    }
    return 0;
}