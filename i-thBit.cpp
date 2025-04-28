// Check if the i-th bit of a number is set (1) or not.
#include <iostream>
using namespace std;

void checkIthBit(int num, int i) {
    if ((num & (1 << i)) != 0) {
        cout << "The " << i << "-th bit is set." << endl;
    } else {
        cout << "The " << i << "-th bit is not set." << endl;
    }
}

int main() {
    int num = 13; 
    int i = 2;    
    checkIthBit(num, i);
}