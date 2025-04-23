#include <iostream>
using namespace std;

double myPow(double x, int n) {
    if (n == 0) return 1;
    if (n < 0) return 1 / (x * myPow(x, -(n + 1)));
    double half = myPow(x, n / 2);
    if (n % 2 == 0) return half * half;
    return half * half * x;
}

int main() {
    double x = 2.0;
    int n = -2;
    cout << myPow(x, n) << endl;
}