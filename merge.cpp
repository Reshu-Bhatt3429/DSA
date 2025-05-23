#include <iostream>  
#include <vector>  
#include <algorithm>  
using namespace std;  

vector<vector<int>> merge(vector<vector<int>>& intervals) {  
    if (intervals.empty()) return {};  

    sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {  
        return a[0] < b[0];  
    });  

    vector<vector<int>> merged;  
    merged.push_back(intervals[0]);  

    for (const auto& interval : intervals) {  
        vector<int>& last = merged.back();  
        if (interval[0] <= last[1]) {  
            last[1] = max(last[1], interval[1]);  
        } else {  
            merged.push_back(interval);  
        }  
    }  
    return merged;  
}  

int main() {  
    vector<vector<int>> intervals = {{1,3}, {2,6}, {8,10}, {15,18}};  
    auto result = merge(intervals);  
    for (auto& interval : result) {  
        cout << "[" << interval[0] << "," << interval[1] << "] ";  
    }  
    return 0;  
}