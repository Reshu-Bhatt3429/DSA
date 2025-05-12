// Problem: Find the length of the longest substring without repeating characters.



#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    string s;
    cin >> s;
    int max_len = 0;
    int n = s.size();
    for (int i = 0; i < n; ++i) {
        unordered_set<char> seen;
        for (int j = i; j < n; ++j) {
            if (seen.find(s[j]) != seen.end()) {
                break;
            }
            seen.insert(s[j]);
            max_len = max(max_len, j - i + 1);
        }
    }
    cout << max_len << endl;
    return 0;
}