#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

unordered_map<int, int> pos;

// 根据中序 + 后序建树
TreeNode* buildTree(const vector<int>& inorder, int inL, int inR,
                    const vector<int>& postorder, int postL, int postR) {
    if(inL > inR || postL > postR) return nullptr;
    int rootVal = postorder[postR];
    TreeNode* root = new TreeNode(rootVal);
    int rootPos = pos[rootVal];
    int leftSize = rootPos - inL;
    root->left = buildTree(inorder, inL,rootPos - 1,
                            postorder, postL, postL + leftSize - 1);

    root->right = buildTree(inorder,rootPos + 1, inR,
                            postorder, postL + leftSize, postR - 1);

    return root;
}

// 层次遍历：结尾没有多余空格
void levelOrder(TreeNode* root) {
    if (!root) return;

    queue<TreeNode*> q;
    q.push(root);
    bool first = true;

    while (!q.empty()) {
        TreeNode* cur = q.front();
        q.pop();

        if (!first) cout << " ";
        cout << cur->val;
        first = false;

        if (cur->left) q.push(cur->left);
        if (cur->right) q.push(cur->right);
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> postorder(n), inorder(n);

    for (int i = 0; i < n; ++i) cin >> postorder[i];
    for (int i = 0; i < n; ++i) {
        cin >> inorder[i];
        pos[inorder[i]] = i;
    }

    TreeNode* root = buildTree(inorder, 0, n - 1, postorder, 0, n - 1);

    levelOrder(root);
    cout << endl;

    return 0;
}
