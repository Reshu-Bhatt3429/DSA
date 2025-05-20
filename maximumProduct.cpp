// Find the maximum product of a contiguous subarray 
#include <iostream>  
#include <vector>  
#include <climits>  
using namespace std;  

int maxProduct(vector<int>& nums) {  
    int max_prod = INT_MIN;  
    for(int i = 0; i < nums.size(); i++) {  
        int curr_prod = 1;  
        for(int j = i; j < nums.size(); j++) {  
            curr_prod *= nums[j];  
            max_prod = max(max_prod, curr_prod);  
        }  
    }  
    return max_prod;  
}  

int main() {  
    vector<int> nums = {2,3,-2,4};  
    cout << "Maximum product: " << maxProduct(nums);  
    return 0;  
}