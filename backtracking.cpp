
// Generate all subsets using backtracking (2^n combinations)  
#include <iostream>  
#include <vector>  
using namespace std;  


void backtrack(vector<vector<int>>& res, vector<int>& nums, vector<int>& temp, int start) {  
    res.push_back(temp);  
    for(int i = start; i < nums.size(); i++) {  
        temp.push_back(nums[i]);  
        backtrack(res, nums, temp, i + 1);  
        temp.pop_back();  
    }  
}  

vector<vector<int>> subsets(vector<int>& nums) {  
    vector<vector<int>> res;  
    vector<int> temp;  
    backtrack(res, nums, temp, 0);  
    return res;  
}  

int main() {  
    vector<int> nums = {1, 2, 3};  
    auto result = subsets(nums);  
    for(auto& subset : result) {  
        cout << "[ ";  
        for(int num : subset) cout << num << " ";  
        cout << "] ";  
    }  
    return 0;  
}