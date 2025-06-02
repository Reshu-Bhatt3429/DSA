#include <iostream>  
#include <vector>  
#include <queue>  
using namespace std;  

bool canFinish(int n, vector<vector<int>>& prereq) {  
    vector<vector<int>> graph(n);  
    vector<int> indegree(n, 0);  
    for(auto& p : prereq) {  
        graph[p[1]].push_back(p[0]);  
        indegree[p[0]]++;  
    }  
    queue<int> q;  
    for(int i = 0; i < n; i++) 
        if(indegree[i] == 0) q.push(i);  
    int count = 0;  
    while(!q.empty()) {  
        int u = q.front(); q.pop();  
        count++;  
        for(int v : graph[u]) {  
            if(--indegree[v] == 0) q.push(v);  
        }  
    }  
    return count == n;  
}  

int main() {  
    int courses = 2;  
    vector<vector<int>> prereq = {{1,0}};  
    cout << (canFinish(courses, prereq) ? "Possible" : "Impossible");  
    return 0;  
}