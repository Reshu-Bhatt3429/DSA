#include <iostream>
#include <vector>
using namespace std;

void printSubsequencesHelper(vector<int>& arr, int index, vector<int>& current) {
    if (index == arr.size()) {
        for (int i = 0; i < current.size(); i++) {
            cout << current[i] << " ";
        }
        cout << endl;
        return;
    }
    printSubsequencesHelper(arr, index + 1, current);
    current.push_back(arr[index]);
    printSubsequencesHelper(arr, index + 1, current);
    current.pop_back();
}

void printSubsequences(vector<int>& arr) {
    vector<int> current;
    printSubsequencesHelper(arr, 0, current);
}

int main() {
    vector<int> arr = {1, 2, 3};
    printSubsequences(arr);
}