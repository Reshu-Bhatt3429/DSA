// Check if the i-th bit (0-based) is set in 'num' using string conversion
#include <iostream>
#include <bitset>
using namespace std;

bool isBitSet(int num, int i) {
    string binary = bitset<32>(num).to_string();
    reverse(binary.begin(), binary.end()); // 
    return i < 32 && binary[i] == '1';
}

int main() {
    int num = 6, i = 2; 
    cout << (isBitSet(num, i) ? "YES" : "NO");
    return 0;
}