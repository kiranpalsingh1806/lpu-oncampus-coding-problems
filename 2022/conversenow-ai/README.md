# ConverseNow AI

## Lowest Common Ancestor

Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

```cpp
class Solution {
public:
    
    bool findPath(TreeNode* root, TreeNode* p, vector<TreeNode*> &path) {
        if(!root) return false;
        
        path.push_back(root);
        
        if(root == p) return true;
        
        if(findPath(root->left, p, path) || findPath(root->right, p, path)) return true;
        
        path.pop_back();
        return false;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> a, b;
        findPath(root, p, a);
        findPath(root, q, b);
        
        TreeNode *ans = nullptr;
        for(int i = 0; i < a.size() && i < b.size() && a[i] == b[i]; i++) {
            ans = a[i];
        }
        
        return ans;
    }
};
```


<details>
<summary>About Me</summary>

- Full Stack Web Developer
- Competitive Programmer

<p align="left"> <img src="https://komarev.com/ghpvc/?username=kiranpalsingh1806&label=Views&color=blue&style=plastic" alt="kiranpalsingh" /> </p>

</details>