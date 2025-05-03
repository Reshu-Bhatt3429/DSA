#include <iostream>
#include <vector>
using namespace std;

vector<int> asteroidCollision(vector<int>& asteroids) {
    vector<int> stack;
    for (int ast : asteroids) {
        bool destroyed = false;
        while (!stack.empty() && stack.back() > 0 && ast < 0) {
            if (stack.back() < -ast) {
                stack.pop_back();
                continue;
            } else if (stack.back() == -ast) {
                stack.pop_back();
            }
            destroyed = true;
            break;
        }
        if (!destroyed) stack.push_back(ast);
    }
    return stack;
}

int main() {
    int n;
    cout << "Enter number of asteroids: ";
    cin >> n;
    vector<int> asteroids(n);
    cout << "Enter asteroid directions (e.g., 5 -5): ";
    for (int i = 0; i < n; ++i) cin >> asteroids[i];
    vector<int> res = asteroidCollision(asteroids);
    cout << "Remaining asteroids: ";
    for (int x : res) cout << x << " ";
    return 0;
}