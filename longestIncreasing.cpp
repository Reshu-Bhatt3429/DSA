#include <iostream>  
#include <vector>  
#include <algorithm>  
using namespace std;  

int lengthOfLIS(vector<int>& nums) {  
    int n = nums.size(), max_len = 1;  
    vector<int> dp(n, 1);  
    for(int i = 1; i < n; i++) {  
        for(int j = 0; j < i; j++) {  
            if(nums[j] < nums[i]) {  
                dp[i] = max(dp[i], dp[j] + 1);  
            }  
        }  
        max_len = max(max_len, dp[i]);  
    }  
    return max_len;  
}  

int main() {  
    vector<int> nums = {10,9,2,5,3,7,101,18};  
    cout << "LIS length: " << lengthOfLIS(nums);  
    return 0;  
}