#include <iostream>  
#include <vector>  
using namespace std;  

int numDecodings(string s) {  
    int n = s.size();  
    vector<int> dp(n+1, 0);  
    dp[0] = 1;  
    dp[1] = s[0] != '0' ? 1 : 0;  

    for(int i=2; i<=n; i++) {  
        int one = stoi(s.substr(i-1, 1));  
        int two = stoi(s.substr(i-2, 2));  

        if(one >= 1) dp[i] += dp[i-1];  
        if(two >= 10 && two <= 26) dp[i] += dp[i-2];  
    }  
    return dp[n];  
}  

int main() {  
    string s = "226";  
    cout << "Decode ways: " << numDecodings(s);  
    return 0;  
}