// Count the number of set bits (1s) in the binary representation of a number.
#include <iostream>
using namespace std;

void countSetBits(int num) {
    int count = 0;
    while (num > 0) {
        if ((num & 1) == 1) {
            count++;
        }
        num = num >> 1;
    }
    cout << "Number of set bits: " << count << endl;
}

int main() {
    int num = 13; 
    countSetBits(num);
}