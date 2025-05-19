#include <iostream>  
#include <vector>  
using namespace std;  

int maxArea(vector<int>& height) {  
    int max_water = 0;  
    for(int i = 0; i < height.size(); i++) {  
        for(int j = i + 1; j < height.size(); j++) {  
            int h = min(height[i], height[j]);  
            int w = j - i;  
            max_water = max(max_water, h * w);  
        }  
    }  
    return max_water;  
}  

int main() {  
    vector<int> heights = {1,8,6,2,5,4,8,3,7};  
    cout << "Max water: " << maxArea(heights);  
    return 0;  
}  