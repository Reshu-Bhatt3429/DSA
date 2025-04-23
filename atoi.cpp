#include <iostream>
#include <string>
using namespace std;

int myAtoiRecursive(string str, int index, int result) {
    if (index == str.length()) return result;
    if (str[index] >= '0' && str[index] <= '9') {
        result = result * 10 + (str[index] - '0');
        return myAtoiRecursive(str, index + 1, result);
    }
    return result;
}

int myAtoi(string str) {
    return myAtoiRecursive(str, 0, 0);
}

int main() {
    string input = "12345";
    cout << myAtoi(input) << endl;
}