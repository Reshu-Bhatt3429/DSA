
//Calculate the sum of the minimum values of all possible subarrays.

#include <iostream>
#include <vector>
using namespace std;

int sumSubarrayMins(vector<int>& arr) {
    int total = 0;
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        int current_min = arr[i];
        total += current_min; // Subarray of length 1
        for (int j = i + 1; j < n; ++j) {
            current_min = min(current_min, arr[j]);
            total += current_min;
        }
    }
    return total;
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i) cin >> arr[i];
    cout << "Sum of subarray minimums: " << sumSubarrayMins(arr) << endl;
    return 0;
}