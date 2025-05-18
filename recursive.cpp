// Recursive solution with hashmap for O(n) time complexity  
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
    int pre_idx = 0;
    unordered_map<int, int> inorder_map;
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for (int i = 0; i < inorder.size(); i++) 
            inorder_map[inorder[i]] = i;
        return build(preorder, 0, preorder.size() - 1);
    }
    
    TreeNode* build(vector<int>& preorder, int left, int right) {
        if (left > right) return nullptr;
        int root_val = preorder[pre_idx++];
        TreeNode* root = new TreeNode(root_val);
        int inorder_idx = inorder_map[root_val];
        root->left = build(preorder, left, inorder_idx - 1);
        root->right = build(preorder, inorder_idx + 1, right);
        return root;
    }
};

void inorderPrint(TreeNode* root) {
    if (!root) return;
    inorderPrint(root->left);
    cout << root->val << " ";
    inorderPrint(root->right);
}

int main() {
    vector<int> preorder = {3,9,20,15,7};
    vector<int> inorder = {9,3,15,20,7};
    Solution sol;
    TreeNode* root = sol.buildTree(preorder, inorder);
    inorderPrint(root);
    return 0;
}