// Print all divisors of a given number.
#include <iostream>
using namespace std;

void printDivisors(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
}

int main() {
    int num = 28; // Example number
    printDivisors(num);
}