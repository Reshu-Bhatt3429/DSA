// Count set bits by checking each bit iteratively (brute force)
#include <iostream>
using namespace std;

int countSetBits(int num) {
    int count = 0;
    for(int i=0; i<32; i++) {
        if((num >> i) & 1) count++;
    }
    return count;
}

int main() {
    int num = 10; // Binary 1010 (2 set bits)
    cout << "Set bits: " << countSetBits(num);
    return 0;
}