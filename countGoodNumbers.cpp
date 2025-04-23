#include <iostream>
using namespace std;

long long mod = 1e9 + 7;

long long power(long long x, long long y) {
    if (y == 0) return 1;
    long long temp = power(x, y / 2);
    if (y % 2 == 0) return (temp * temp) % mod;
    return (x * temp * temp) % mod;
}

int countGoodNumbers(long long n) {
    long long even = n / 2 + n % 2;
    long long odd = n / 2;
    return (power(5, even) * power(4, odd)) % mod;
}

int main() {
    long long n = 5;
    cout << countGoodNumbers(n) << endl;
}