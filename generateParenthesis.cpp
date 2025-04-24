#include <iostream>
#include <string>
using namespace std;

void generateParenthesisHelper(int open, int close, string current) {
    if (open == 0 && close == 0) {
        cout << current << endl;
        return;
    }
    if (open > 0) {
        generateParenthesisHelper(open - 1, close, current + "(");
    }
    if (close > open) {
        generateParenthesisHelper(open, close - 1, current + ")");
    }
}

void generateParenthesis(int n) {
    generateParenthesisHelper(n, n, "");
}

int main() {
    int n = 3;
    generateParenthesis(n);
}