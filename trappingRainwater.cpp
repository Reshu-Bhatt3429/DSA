#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int trapWater(vector<int>& height) {
    int total = 0, n = height.size();
    for (int i = 0; i < n; ++i) {
        int left_max = 0, right_max = 0;
        // Find maximum height to the left of i
        for (int j = 0; j <= i; ++j) {
            left_max = max(left_max, height[j]);
        }
        // Find maximum height to the right of i
        for (int j = i; j < n; ++j) {
            right_max = max(right_max, height[j]);
        }
        // Water trapped = min(left_max, right_max) - current height
        total += min(left_max, right_max) - height[i];
    }
    return total;
}

int main() {
    int n;
    cout << "Enter number of bars: ";
    cin >> n;
    vector<int> heights(n);
    cout << "Enter heights: ";
    for (int i = 0; i < n; ++i) cin >> heights[i];
    cout << "Trapped Rainwater: " << trapWater(heights) << endl;
    return 0;
}