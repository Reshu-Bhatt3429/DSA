#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(string s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) return false;
        start++;
        end--;
    }
    return true;
}

void palindromePartitionHelper(string s, int index, vector<string>& current, vector<vector<string>>& result) {
    if (index == s.size()) {
        result.push_back(current);
        return;
    }
    for (int i = index; i < s.size(); i++) {
        if (isPalindrome(s, index, i)) {
            current.push_back(s.substr(index, i - index + 1));
            palindromePartitionHelper(s, i + 1, current, result);
            current.pop_back();
        }
    }
}

vector<vector<string>> palindromePartition(string s) {
    vector<vector<string>> result;
    vector<string> current;
    palindromePartitionHelper(s, 0, current, result);
    return result;
}

int main() {
    string s = "aab";
    vector<vector<string>> result = palindromePartition(s);
    for (auto partition : result) {
        for (auto str : partition) {
            cout << str << " ";
        }
        cout << endl;
    }
}