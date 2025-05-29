#include <iostream>  
#include <vector>  
using namespace std;  

void rotate(vector<vector<int>>& matrix) {  
    int n = matrix.size();  
        for(int i = 0; i < n; i++) {  
        for(int j = i; j < n; j++) {  
            swap(matrix[i][j], matrix[j][i]);  
        }  
    }  
    for(int i = 0; i < n; i++) {  
        for(int j = 0; j < n/2; j++) {  
            swap(matrix[i][j], matrix[i][n-1-j]);  
        }  
    }  
}  

int main() {  
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};  
    rotate(matrix);  
    cout << "Rotated:\n";  
    for(auto& row : matrix) {  
        for(int num : row) cout << num << " ";  
        cout << "\n";  
    }  
    return 0;  
}