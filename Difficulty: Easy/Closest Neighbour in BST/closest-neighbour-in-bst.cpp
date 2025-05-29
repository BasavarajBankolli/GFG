/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
}; */

class Solution {
  public:
    int mx = 0;
    void dfs(Node* node, int k){
        if(!node) return;
        
        if(node -> data <= k) mx = max(mx, node -> data);
        
        dfs(node -> left, k);
        dfs(node -> right, k);
    }
    int findMaxFork(Node* root, int k) {
        // code here
        
        dfs(root, k);
        
        return (mx != 0) ? mx: -1;
        
    }
};