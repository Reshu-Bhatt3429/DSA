// Problem: Find the maximum sum of any consecutive subarray of size k.
#include <iostream>
#include <vector>
#include <climits>

using namespace std;


int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int max_sum = INT_MIN;
    for (int i = 0; i <= n - k; ++i) {
        int current_sum = 0;
        for (int j = i; j < i + k; ++j) {
            current_sum += arr[j];
        }
        max_sum = max(max_sum, current_sum);
    }
    cout << max_sum << endl;
    return 0;
}