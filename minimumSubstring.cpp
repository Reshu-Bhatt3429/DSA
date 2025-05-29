#include <iostream>  
#include <vector>  
#include <unordered_map>  
using namespace std;  

string minWindow(string s, string t) {  
    unordered_map<char, int> need;  
    for(char c : t) need[c]++;  
    int missing = t.size();  
    int min_len = INT_MAX, start = 0;  
    int left = 0;  

    for(int right = 0; right < s.size(); right++) {  
        if(need.find(s[right]) != need.end()) {  
            if(--need[s[right]] >= 0) missing--;  
        }  

        while(missing == 0) {  
            if(right - left + 1 < min_len) {  
                min_len = right - left + 1;  
                start = left;  
            }  
            if(need.find(s[left]) != need.end()) {  
                if(++need[s[left]] > 0) missing++;  
            }  
            left++;  
        }  
    }  
    return min_len == INT_MAX ? "" : s.substr(start, min_len);  
}  

int main() {  
    string s = "ADOBECODEBANC", t = "ABC";  
    cout << "Min window: " << minWindow(s, t);  
    return 0;  
}