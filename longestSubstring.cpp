// Find the length of the longest substring without repeating characters.

#include <string>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int max_length = 0;
    for (int i = 0; i < s.size(); ++i) {
        bool visited[256] = {false};
        for (int j = i; j < s.size(); ++j) {
            if (visited[static_cast<unsigned char>(s[j])]) {
                break;
            }
            visited[static_cast<unsigned char>(s[j])] = true;
            max_length = max(max_length, j - i + 1);
        }
    }
    return max_length;
}