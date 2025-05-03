//Largest Rectangle in histogram


#include <iostream>
#include <vector>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
    int max_area = 0;
    int n = heights.size();
    for (int i = 0; i < n; ++i) {
        int min_height = heights[i];
        max_area = max(max_area, min_height); // Single bar
        for (int j = i + 1; j < n; ++j) {
            min_height = min(min_height, heights[j]);
            max_area = max(max_area, min_height * (j - i + 1));
        }
    }
    return max_area;
}

int main() {
    int n;
    cout << "Enter number of bars: ";
    cin >> n;
    vector<int> heights(n);
    cout << "Enter heights: ";
    for (int i = 0; i < n; ++i) cin >> heights[i];
    cout << "Largest rectangle area: " << largestRectangleArea(heights) << endl;
    return 0;
}