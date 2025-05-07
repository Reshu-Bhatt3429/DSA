#include <iostream>
#include <vector>
using namespace std;

int atMostOdds(const vector<int>& nums, int k) {
    int left = 0, count = 0, odd_count = 0;
    for (int right = 0; right < nums.size(); ++right) {
        if (nums[right] % 2 != 0) odd_count++;
        while (odd_count > k) {
            if (nums[left] % 2 != 0) odd_count--;
            left++;
        }
        count += right - left + 1;
    }
    return count;
}

int main() {
    // Example Input: [2,2,2,1,2,2,1,2,2,2], k = 2 → Output: 16
    vector<int> nums = {2, 2, 2, 1, 2, 2, 1, 2, 2, 2};
    int k = 2;
    
    int result = atMostOdds(nums, k) - atMostOdds(nums, k - 1);
    cout << "Number of nice subarrays: " << result << endl; // Output: 16
    
    return 0;
}