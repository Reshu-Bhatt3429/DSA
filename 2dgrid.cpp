#include <iostream>  
#include <vector>  
using namespace std;  

void dfs(vector<vector<char>>& grid, int i, int j) {  
    if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] != '1')  
        return;  

    grid[i][j] = '#'; // Mark as visited  
    dfs(grid, i+1, j); // Down  
    dfs(grid, i-1, j); // Up  
    dfs(grid, i, j+1); // Right  
    dfs(grid, i, j-1); // Left  
}  

int numIslands(vector<vector<char>>& grid) {  
    int count = 0;  
    for (int i = 0; i < grid.size(); i++) {  
        for (int j = 0; j < grid[0].size(); j++) {  
            if (grid[i][j] == '1') {  
                dfs(grid, i, j);  
                count++;  
            }  
        }  
    }  
    return count;  
}  

int main() {  
    vector<vector<char>> grid = {  
        {'1','1','0','0','0'},  
        {'1','1','0','0','0'},  
        {'0','0','1','0','0'},  
        {'0','0','0','1','1'}  
    };  
    cout << "Number of islands: " << numIslands(grid);   
    return 0;  
}  