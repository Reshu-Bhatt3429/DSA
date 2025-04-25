#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>>& maze, int x, int y, int n) {
    return (x >= 0 && y >= 0 && x < n && y < n && maze[x][y] == 1);
}

bool solveMazeHelper(vector<vector<int>>& maze, int x, int y, int n, vector<vector<int>>& solution) {
    if (x == n - 1 && y == n - 1) {
        solution[x][y] = 1;
        return true;
    }
    if (isSafe(maze, x, y, n)) {
        solution[x][y] = 1;
        if (solveMazeHelper(maze, x + 1, y, n, solution)) return true;
        if (solveMazeHelper(maze, x, y + 1, n, solution)) return true;
        solution[x][y] = 0;
        return false;
    }
    return false;
}

void solveMaze(vector<vector<int>>& maze, int n) {
    vector<vector<int>> solution(n, vector<int>(n, 0));
    if (!solveMazeHelper(maze, 0, 0, n, solution)) {
        cout << "No solution exists" << endl;
        return;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << solution[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> maze = {{1, 0, 0, 0}, {1, 1, 0, 1}, {0, 1, 0, 0}, {1, 1, 1, 1}};
    int n = maze.size();
    solveMaze(maze, n);
}