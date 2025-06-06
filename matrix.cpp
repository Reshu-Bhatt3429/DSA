#include <iostream>  
#include <vector>  
using namespace std;  

vector<int> spiralOrder(vector<vector<int>>& matrix) {  
    vector<int> result;  
    int top = 0, bottom = matrix.size()-1;  
    int left = 0, right = matrix[0].size()-1;  

    while (top <= bottom && left <= right) {  
        // Traverse right  
        for (int i = left; i <= right; i++)  
            result.push_back(matrix[top][i]);  
        top++;  

        // Traverse down  
        for (int i = top; i <= bottom; i++)  
            result.push_back(matrix[i][right]);  
        right--;  

        if (top <= bottom) {  
            // Traverse left  
            for (int i = right; i >= left; i--)  
                result.push_back(matrix[bottom][i]);  
            bottom--;  
        }  

        if (left <= right) {  
            // Traverse up  
            for (int i = bottom; i >= top; i--)  
                result.push_back(matrix[i][left]);  
            left++;  
        }  
    }  
    return result;  
}  

int main() {  
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};  
    vector<int> ans = spiralOrder(matrix);  
    for (int num : ans) cout << num << " "; 
}  