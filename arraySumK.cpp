// Check if there exists any subsequence of an array whose sum equals K.
#include <iostream>
#include <vector>
using namespace std;

bool checkSubsequenceHelper(vector<int>& arr, int index, int currentSum, int target) {
    if (index == arr.size()) return currentSum == target;
    bool include = checkSubsequenceHelper(arr, index + 1, currentSum + arr[index], target);
    bool exclude = checkSubsequenceHelper(arr, index + 1, currentSum, target);
    return include || exclude;
}

bool checkSubsequence(vector<int>& arr, int target) {
    return checkSubsequenceHelper(arr, 0, 0, target);
}

int main() {
    vector<int> arr = {1, 2, 3};
    int target = 5;
    cout << (checkSubsequence(arr, target) ? "Yes" : "No") << endl;
}