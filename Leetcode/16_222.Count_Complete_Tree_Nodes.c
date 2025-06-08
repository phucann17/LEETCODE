
struct TreeNode {
 int val;
 struct TreeNode *left;
 struct TreeNode *right;
};

int countNodes(struct TreeNode* root) {
    if (!root) return 0;
    int left = countNodes(root->left);
    int right = countNodes(root->right);
    return left + right + 1;
}