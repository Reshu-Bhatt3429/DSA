//find length of smallest subarray with sum >= S

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> arr = {2, 3, 1, 2, 4, 3};
    int target_sum = 7;
    int min_length = INT_MAX;
    for (int i = 0; i < arr.size(); ++i) {
        int current_sum = 0;
        for (int j = i; j < arr.size(); ++j) {
            current_sum += arr[j];
            if (current_sum >= target_sum) {
                int length = j - i + 1;
                if (length < min_length) {
                    min_length = length;
                }
                break;
            }
        }
    }
    cout << (min_length == INT_MAX ? 0 : min_length) << endl;
    return 0;
}