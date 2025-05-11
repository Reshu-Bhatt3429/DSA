//find maximum sum of any contiguous subarray of size K

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    int k = 3;
    int max_sum = 0;
    for (int i = 0; i <= arr.size() - k; ++i) {
        int current_sum = 0;
        for (int j = i; j < i + k; ++j) {
            current_sum += arr[j];
        }
        if (current_sum > max_sum || i == 0) {
            max_sum = current_sum;
        }
    }
    cout << max_sum << endl;
    return 0;
}