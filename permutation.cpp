#include <iostream>  
#include <vector>  
using namespace std;  

void backtrack(vector<vector<int>>& res, vector<int>& nums, int start) {  
    if (start == nums.size()) {  
        res.push_back(nums);  
        return;  
    }  
    for (int i = start; i < nums.size(); i++) {  
        swap(nums[start], nums[i]);  
        backtrack(res, nums, start + 1);  
        swap(nums[start], nums[i]);  
    }  
}  

vector<vector<int>> permute(vector<int>& nums) {  
    vector<vector<int>> res;  
    backtrack(res, nums, 0);  
    return res;  
}  

int main() {  
    vector<int> nums = {1, 2, 3};  
    auto result = permute(nums);  
    for (auto& perm : result) {  
        for (int num : perm) cout << num << " ";  
        cout << "\n";  
    }  
    return 0;  
}