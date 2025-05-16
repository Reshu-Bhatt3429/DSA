// Find the position (0-based) of the rightmost set bit  
#include <iostream>  
using namespace std;  

int findRightmostSetBit(int num) {  
    if(num == 0) return -1;  
    for(int i=0; i<32; i++) {  
        if((num >> i) & 1) return i;  
    }  
    return -1;  
}  

int main() {  
    int num = 12;
    cout << "Rightmost set bit position: " << findRightmostSetBit(num);  
    return 0;  
}  