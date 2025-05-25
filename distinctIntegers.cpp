#include <iostream>  
#include <vector>  
using namespace std;  

void backtrack(vector<vector<int>>& res, vector<int>& candidates, vector<int>& temp, int target, int start) {  
    if (target == 0) {  
        res.push_back(temp);  
        return;  
    }  
    for (int i = start; i < candidates.size(); i++) {  
        if (candidates[i] > target) continue;  
        temp.push_back(candidates[i]);  
        backtrack(res, candidates, temp, target - candidates[i], i);  
        temp.pop_back();  
    }  
}  

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {  
    vector<vector<int>> res;  
    vector<int> temp;  
    backtrack(res, candidates, temp, target, 0);  
    return res;  
}  

int main() {  
    vector<int> candidates = {2,3,6,7};  
    int target = 7;  
    auto result = combinationSum(candidates, target);  
    for (auto& comb : result) {  
        for (int num : comb) cout << num << " ";  
        cout << "\n";  
    }  
    return 0;  
}