#include <iostream>
#include <string>
using namespace std;

void generateBinaryStrings(int n, string current) {
    if (current.length() == n) {
        cout << current << endl;
        return;
    }
    generateBinaryStrings(n, current + "0");
    generateBinaryStrings(n, current + "1");
}

int main() {
    int n = 3;
    generateBinaryStrings(n, "");
}