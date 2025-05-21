#include <iostream>  
#include <vector>  
using namespace std;  

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {  
    vector<int> ans;  
    for(int num : nums1) {  
        bool found = false, next_found = false;  
        for(int i = 0; i < nums2.size(); i++) {  
            if(nums2[i] == num) found = true;  
            if(found && nums2[i] > num) {  
                ans.push_back(nums2[i]);  
                next_found = true;  
                break;  
            }  
        }  
        if(!next_found) ans.push_back(-1);  
    }  
    return ans;  
}  

int main() {  
    vector<int> nums1 = {4, 1, 2}, nums2 = {1, 3, 4, 2};  
    vector<int> result = nextGreaterElement(nums1, nums2);  
    for(int num : result) cout << num << " ";  
    return 0;  
}  