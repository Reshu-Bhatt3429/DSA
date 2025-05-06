// Longest Repeating Character Replacement - Brute force
class Solution {
    public:
        int characterReplacement(string s, int k) {
            int max_len = 0;
            int n = s.size();
            for (int i = 0; i < n; ++i) {
                vector<int> count(26, 0);
                int current_max = 0;
                for (int j = i; j < n; ++j) {
                    char c = s[j];
                    ++count[c - 'A'];
                    if (count[c - 'A'] > current_max) {
                        current_max = count[c - 'A'];
                    }
                    int len = j - i + 1;
                    if (len - current_max <= k) {
                        max_len = max(max_len, len);
                    }
                }
            }
            return max_len;
        }
    };