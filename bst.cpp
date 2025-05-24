#include <iostream>  
#include <climits>  
using namespace std;  

struct TreeNode {  
    int val;  
    TreeNode* left;  
    TreeNode* right;  
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}  
};  

bool isValidBST(TreeNode* root, long min_val = LONG_MIN, long max_val = LONG_MAX) {  
    if (!root) return true;  
    if (root->val <= min_val || root->val >= max_val) return false;  
    return isValidBST(root->left, min_val, root->val) &&  
           isValidBST(root->right, root->val, max_val);  
}  

int main() {  
    TreeNode* root = new TreeNode(2);  
    root->left = new TreeNode(1);  
    root->right = new TreeNode(3);  
    cout << (isValidBST(root) ? "Valid" : "Invalid");  
    return 0;  
}