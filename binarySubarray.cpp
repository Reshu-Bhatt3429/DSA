#include <iostream>
#include <vector>
using namespace std;

int atMostSum(const vector<int>& nums, int target) {
    int left = 0, count = 0, sum = 0;
    for (int right = 0; right < nums.size(); ++right) {
        sum += nums[right];
        while (sum > target && left <= right) {
            sum -= nums[left];
            left++;
        }
        count += right - left + 1;
    }
    return count;
}

int main() {
    // Example Input: [1,0,1,0,1], goal = 2 → Output: 4
    vector<int> nums = {1, 0, 1, 0, 1};
    int goal = 2;
    
    int result = atMostSum(nums, goal) - atMostSum(nums, goal - 1);
    cout << "Number of subarrays: " << result << endl; // Output: 4
    
    return 0;
}