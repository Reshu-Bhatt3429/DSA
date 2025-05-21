#include <iostream>  
#include <vector>  
#include <set>  
#include <algorithm>  
using namespace std;  

vector<vector<int>> threeSum(vector<int>& nums) {  
    set<vector<int>> unique_triplets;  
    int n = nums.size();  
    for(int i = 0; i < n; i++) {  
        for(int j = i+1; j < n; j++) {  
            for(int k = j+1; k < n; k++) {  
                if(nums[i] + nums[j] + nums[k] == 0) {  
                    vector<int> triplet = {nums[i], nums[j], nums[k]};  
                    sort(triplet.begin(), triplet.end());  
                    unique_triplets.insert(triplet);  
                }  
            }  
        }  
    }  
    return vector<vector<int>>(unique_triplets.begin(), unique_triplets.end());  
}  

int main() {  
    vector<int> nums = {-1, 0, 1, 2, -1, -4};  
    auto result = threeSum(nums);  
    for(auto& triplet : result) {  
        cout << "[ ";  
        for(int num : triplet) cout << num << " ";  
        cout << "] ";  
    }  
  
    return 0;  
}  