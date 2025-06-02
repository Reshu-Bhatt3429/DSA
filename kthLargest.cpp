#include <iostream>  
#include <vector>  
#include <cstdlib>  
#include <ctime>  
using namespace std;  

int partition(vector<int>& nums, int left, int right) {  
    int pivot = nums[right];  
    int i = left;  
    for(int j = left; j < right; j++) {  
        if(nums[j] > pivot) swap(nums[i++], nums[j]);  
    }  
    swap(nums[i], nums[right]);  
    return i;  
}  

int findKthLargest(vector<int>& nums, int k) {  
    srand(time(0));  
    int left = 0, right = nums.size()-1;  
    while(true) {  
        int p = partition(nums, left, right);  
        if(p == k-1) return nums[p];  
        if(p < k-1) left = p+1;  
        else right = p-1;  
    }  
}  

int main() {  
    vector<int> nums = {3,2,1,5,6,4};  
    int k = 2;  
    cout << k << "th largest: " << findKthLargest(nums, k);  
    return 0;  
}