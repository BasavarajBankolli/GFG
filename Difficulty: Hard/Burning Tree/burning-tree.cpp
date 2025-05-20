/*
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    int minTime(Node *root, int target) {
    
        if (root == nullptr) return -1;
        
        queue<Node*> q;
        q.push(root);
        Node* tar;
        
        
        unordered_map<Node*, Node*> par;
        par[root] = nullptr;
        
        while (!q.empty()) {
            Node* curr = q.front();
            q.pop();
            
            
            if (curr->data == target)
                tar = curr;
            
            
            if (curr->left != nullptr) {
                par[curr->left] = curr;
                q.push(curr->left);
            }
            
            
            if (curr->right != nullptr) {
                par[curr->right] = curr;
                q.push(curr->right);
            }
        }
        
        
        unordered_map<Node*, bool> vis;
        
        int ans = -1;
        
        q.push(tar);
        
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                Node* curr = q.front();
                vis[curr] = true;
                q.pop();
                
                if (curr->left != nullptr && !vis[curr->left])
                    q.push(curr->left);
                
                if (curr->right != nullptr && !vis[curr->right])
                    q.push(curr->right);
                
                if (par[curr] != nullptr && !vis[par[curr]])
                    q.push(par[curr]);
            }
            
            ans++;
        }
        
        return ans;
    }

};