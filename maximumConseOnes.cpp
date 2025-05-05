// Find the maximum number of consecutive 1s after flipping at most k 0s.

#include <vector>
using namespace std;

int longestOnes(vector<int>& nums, int k) {
    int max_len = 0;
    for (int i = 0; i < nums.size(); ++i) {
        int zero_count = 0;
        for (int j = i; j < nums.size(); ++j) {
            if (nums[j] == 0) zero_count++;
            if (zero_count > k) break;
            max_len = max(max_len, j - i + 1);
        }
    }
    return max_len;
}