// Check if a given number is odd or even using bitwise operations.
#include <iostream>
using namespace std;

void checkOdd(int num) {
    if ((num & 1) == 1) {
        cout << num << " is odd." << endl;
    } else {
        cout << num << " is even." << endl;
    }
}

int main() {
    int num = 7; // Example number
    checkOdd(num);
}