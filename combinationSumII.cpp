// Find all unique combinations in candidates where the numbers sum to target (no duplicates allowed).
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void combinationSum2Helper(vector<int>& candidates, int target, vector<int>& current, int start) {
    if (target == 0) {
        for (int i : current) cout << i << " ";
        cout << endl;
        return;
    }
    if (target < 0) return;
    for (int i = start; i < candidates.size(); i++) {
        if (i > start && candidates[i] == candidates[i - 1]) continue;
        current.push_back(candidates[i]);
        combinationSum2Helper(candidates, target - candidates[i], current, i + 1);
        current.pop_back();
    }
}

void combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<int> current;
    combinationSum2Helper(candidates, target, current, 0);
}

int main() {
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;
    combinationSum2(candidates, target);
}