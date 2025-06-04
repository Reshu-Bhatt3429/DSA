#include <iostream>  
#include <vector>  
#include <algorithm>  
using namespace std;  

int leastInterval(vector<char>& tasks, int n) {  
    vector<int> freq(26, 0);  
    for(char t : tasks) freq[t-'A']++;  
    sort(freq.rbegin(), freq.rend());  
    
    int max_freq = freq[0];  
    int idle_slots = (max_freq - 1) * n;  
    
    for(int i = 1; i < 26 && idle_slots > 0; i++) {  
        idle_slots -= min(freq[i], max_freq - 1);  
    }  
    return tasks.size() + max(0, idle_slots);  
}  

int main() {  
    vector<char> tasks = {'A','A','A','B','B','B'};  
    int n = 2;  
    cout << "Minimum intervals: " << leastInterval(tasks, n);  
    return 0;  
}