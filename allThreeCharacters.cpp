#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int numberOfSubstrings(string s) {
    int last_a = -1, last_b = -1, last_c = -1;
    int count = 0;
    for (int i = 0; i < s.size(); ++i) {
        char c = s[i];
        if (c == 'a') last_a = i;
        else if (c == 'b') last_b = i;
        else last_c = i;
        
        if (last_a != -1 && last_b != -1 && last_c != -1) {
            int min_last = min(last_a, min(last_b, last_c));
            count += min_last + 1;
        }
    }
    return count;
}

int main() {
    string s = "abcabc";
    cout << numberOfSubstrings(s) << endl; // Output: 10
    return 0;
}