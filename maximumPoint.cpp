#include <iostream>
#include <vector>
using namespace std;

int maxScore(vector<int>& cardPoints, int k) {
    int n = cardPoints.size();
    vector<int> prefix(n + 1, 0);
    for (int i = 0; i < n; ++i)
        prefix[i + 1] = prefix[i] + cardPoints[i];
    
    int total = prefix[n];
    int max_sum = 0;
    for (int i = 0; i <= k; ++i) {
        int j = k - i;
        int current = prefix[i] + (total - prefix[n - j]);
        max_sum = max(max_sum, current);
    }
    return max_sum;
}

int main() {
    vector<int> cardPoints = {1, 2, 3, 4, 5, 6, 1};
    int k = 3;
    cout << maxScore(cardPoints, k) << endl; // Output: 12
    return 0;
}