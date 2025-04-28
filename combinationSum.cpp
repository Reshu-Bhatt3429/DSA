// Find all unique combinations in candidates where the numbers sum to target.
#include <iostream>
#include <vector>
using namespace std;

void combinationSumHelper(vector<int>& candidates, int target, vector<int>& current, int start) {
    if (target == 0) {
        for (int i : current) cout << i << " ";
        cout << endl;
        return;
    }
    if (target < 0) return;
    for (int i = start; i < candidates.size(); i++) {
        current.push_back(candidates[i]);
        combinationSumHelper(candidates, target - candidates[i], current, i);
        current.pop_back();
    }
}

void combinationSum(vector<int>& candidates, int target) {
    vector<int> current;
    combinationSumHelper(candidates, target, current, 0);
}

int main() {
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;
    combinationSum(candidates, target);
}