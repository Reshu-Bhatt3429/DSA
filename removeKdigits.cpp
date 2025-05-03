//Remove k digits to form the smallest possible number.


#include <iostream>
#include <string>
using namespace std;

string removeKdigits(string num, int k) {
    string result;
    for (char c : num) {
        while (!result.empty() && k > 0 && result.back() > c) {
            result.pop_back();
            k--;
        }
        result.push_back(c);
    }
    // Remove remaining k digits from the end
    while (k > 0 && !result.empty()) {
        result.pop_back();
        k--;
    }
    // Remove leading zeros
    size_t first_non_zero = result.find_first_not_of('0');
    return result.empty() || first_non_zero == string::npos ? "0" : result.substr(first_non_zero);
}

int main() {
    string num;
    int k;
    cout << "Enter number string: ";
    cin >> num;
    cout << "Enter k: ";
    cin >> k;
    cout << "Smallest number: " << removeKdigits(num, k) << endl;
    return 0;
}