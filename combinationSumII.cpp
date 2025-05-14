#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void combinationSum2(vector<int>& candidates, int target, vector<int>& current, int index, vector<vector<int>>& result) {
    if (target == 0) {
        result.push_back(current);
        return;
    }
    for (int i = index; i < candidates.size(); ++i) {
        if (i > index && candidates[i] == candidates[i-1]) continue;
        if (candidates[i] > target) break;
        current.push_back(candidates[i]);
        combinationSum2(candidates, target - candidates[i], current, i + 1, result);
        current.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> result;
    vector<int> current;
    combinationSum2(candidates, target, current, 0, result);
    return result;
}

int main() {
    vector<int> candidates = {10,1,2,7,6,1,5};
    int target = 8;
    vector<vector<int>> result = combinationSum2(candidates, target);

    for (const auto& comb : result) {
        for (int num : comb) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}