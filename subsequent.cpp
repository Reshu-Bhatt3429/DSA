#include <iostream>
#include <vector>
using namespace std;

void subsequencesWithSumHelper(vector<int>& arr, int index, vector<int>& current, int target, int currentSum) {
    if (index == arr.size()) {
        if (currentSum == target) {
            for (int i = 0; i < current.size(); i++) {
                cout << current[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    subsequencesWithSumHelper(arr, index + 1, current, target, currentSum);
    current.push_back(arr[index]);
    subsequencesWithSumHelper(arr, index + 1, current, target, currentSum + arr[index]);
    current.pop_back();
}

void subsequencesWithSum(vector<int>& arr, int target) {
    vector<int> current;
    subsequencesWithSumHelper(arr, 0, current, target, 0);
}

int main() {
    vector<int> arr = {1, 2, 3};
    int target = 3;
    subsequencesWithSum(arr, target);
}