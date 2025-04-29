// Print all prime factors of a given number.
#include <iostream>
using namespace std;

void printPrimeFactors(int n) {
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
}

int main() {
    int num = 36; // Example number
    printPrimeFactors(num);
}