#include <iostream>
#include <vector>
using namespace std;

vector<int> nextGreaterCircular(vector<int>& nums) {
    int n = nums.size();
    vector<int> res(n, -1);
    for (int i = 0; i < n; ++i) {
        for (int j = 1; j < n; ++j) { // Check up to n-1 elements ahead
            int idx = (i + j) % n;     // Wrap around using modulo
            if (nums[idx] > nums[i]) {
                res[i] = nums[idx];
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
    vector<int> result = nextGreaterCircular(nums);
    cout << "Next Greater Elements (Circular): ";
    for (int x : result) cout << x << " ";
    return 0;
}