#include <iostream>
#include <vector>
using namespace std;

vector<int> nextGreater(vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, -1);
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (nums[j] > nums[i]) {
                res[i] = nums[j];
                break;
            }
        }
    }
    return res;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) cin >> nums[i];
    vector<int> result = nextGreater(nums);
    cout << "Next Greater Elements: ";
    for (int x : result) cout << x << " ";
    return 0;
}