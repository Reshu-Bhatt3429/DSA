// Find the length of the longest substring without repeating characters 
#include <iostream>  
#include <unordered_set>  
using namespace std;  

int lengthOfLongestSubstring(string s) {  
    int max_len = 0;  
    for(int i = 0; i < s.size(); i++) {  
        for(int j = i; j < s.size(); j++) {  
            unordered_set<char> seen;  
            bool duplicate = false;  
            // Check substring s[i..j]  
            for(int k = i; k <= j; k++) {  
                if(seen.count(s[k])) {  
                    duplicate = true;  
                    break;  
                }  
                seen.insert(s[k]);  
            }  
            if(!duplicate) max_len = max(max_len, j - i + 1);  
        }  
    }  
    return max_len;  
}  

int main() {  
    string s = "abcabcbb";  
    cout << "Longest substring: " << lengthOfLongestSubstring(s);  
    return 0;  
}