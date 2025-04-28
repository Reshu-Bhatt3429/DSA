// Check if a given number is a power of 2 using bitwise operations.
#include <iostream>
using namespace std;

void checkPowerOfTwo(int num) {
    if (num <= 0) {
        cout << num << " is not a power of 2." << endl;
        return;
    }
    if ((num & (num - 1)) == 0) {
        cout << num << " is a power of 2." << endl;
    } else {
        cout << num << " is not a power of 2." << endl;
    }
}

int main() {
    int num = 8;
    checkPowerOfTwo(num);
}