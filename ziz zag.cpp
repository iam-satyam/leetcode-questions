class Solution {
    int A = 0;
    pair<int, int> post(TreeNode* root)  {
        if (!root || (!root->left && !root->right)) 
        {return { 0, 0 };
        }
        pair<int, int> ans;
        if (root->left) {
            auto left = post(root->left);
            ans.first = 1 + left.second;
        }
        if (root->right) {
            auto right = post(root->right);
            ans.second = 1 + right.first;
        }
        A = max({ A, ans.first, ans.second });
        return ans;
    }
public:
    int longestZigZag(TreeNode* root) {
        post(root);
        return A;
    }
};
