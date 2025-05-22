#include <iostream>  
#include <vector>  
using namespace std;  

int characterReplacement(string s, int k) {  
    vector<int> freq(26, 0);  
    int max_len = 0, max_count = 0;  
    int left = 0;  

    for (int right = 0; right < s.size(); right++) {  
        freq[s[right]-'A']++;  
        max_count = max(max_count, freq[s[right]-'A']);  

        // Window size - max_count > k: shrink window  
        while (right - left + 1 - max_count > k) {  
            freq[s[left]-'A']--;  
            left++;  
        }  
        max_len = max(max_len, right - left + 1);  
    }  
    return max_len;  
}  

int main() {  
    string s = "AABABBA";  
    int k = 1;  
    cout << "Longest substring: " << characterReplacement(s, k); 
    return 0;  
}  