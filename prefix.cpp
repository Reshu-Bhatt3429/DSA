#include <iostream>  
#include <vector>  
#include <unordered_map>  
using namespace std;  

int subarraySum(vector<int>& nums, int k) {  
    unordered_map<int, int> prefix_sum = {{0, 1}};  
    int sum = 0, count = 0;  
    for(int num : nums) {  
        sum += num;  
        if(prefix_sum.find(sum - k) != prefix_sum.end())  
            count += prefix_sum[sum - k];  
        prefix_sum[sum]++;  
    }  
    return count;  
}  

int main() {  
    vector<int> nums = {1,2,3};  
    int k = 3;  
    cout << "Subarrays: " << subarraySum(nums, k);  
    return 0;  
}