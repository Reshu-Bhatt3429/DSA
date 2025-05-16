// Check if a number is a power of two using repeated division  
#include <iostream>  
using namespace std;  

bool isPowerOfTwo(int num) {  
    if(num <= 0) return false;  
    while(num % 2 == 0) num /= 2;  
    return num == 1;  
}  

int main() {  
    int num = 8;  
    cout << num << " is " << (isPowerOfTwo(num) ? "YES" : "NO");  
    return 0;  
}  