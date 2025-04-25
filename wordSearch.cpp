#include <iostream>
#include <vector>
using namespace std;

bool searchWord(vector<vector<char>>& board, string word, int index, int x, int y) {
    if (index == word.size()) return true;
    if (x < 0 || y < 0 || x >= board.size() || y >= board[0].size() || board[x][y] != word[index]) return false;
    char temp = board[x][y];
    board[x][y] = '#';
    bool found = searchWord(board, word, index + 1, x + 1, y) ||
                 searchWord(board, word, index + 1, x - 1, y) ||
                 searchWord(board, word, index + 1, x, y + 1) ||
                 searchWord(board, word, index + 1, x, y - 1);
    board[x][y] = temp;
    return found;
}

bool exist(vector<vector<char>>& board, string word) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[0].size(); j++) {
            if (searchWord(board, word, 0, i, j)) return true;
        }
    }
    return false;
}

int main() {
    vector<vector<char>> board = {{'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};
    string word = "ABCCED";
    cout << (exist(board, word) ? "true" : "false") << endl;
}