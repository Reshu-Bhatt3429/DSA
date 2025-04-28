// Count all subsequences of an array whose sum equals K.
#include <iostream>
#include <vector>
using namespace std;

int countSubsequencesHelper(vector<int>& arr, int index, int currentSum, int target) {
    if (index == arr.size()) {
        return currentSum == target ? 1 : 0;
    }
    int include = countSubsequencesHelper(arr, index + 1, currentSum + arr[index], target);
    int exclude = countSubsequencesHelper(arr, index + 1, currentSum, target);
    return include + exclude;
}

int countSubsequences(vector<int>& arr, int target) {
    return countSubsequencesHelper(arr, 0, 0, target);
}

int main() {
    vector<int> arr = {1, 2, 3};
    int target = 3;
    cout << countSubsequences(arr, target) << endl;
}