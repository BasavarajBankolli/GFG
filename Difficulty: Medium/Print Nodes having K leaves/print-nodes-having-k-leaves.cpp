/*The Node is defined as follows:
struct Node
{
    int data ;
    struct Node * left, * right ;
};
*/

class Solution {
  public:
    /*You are required to complete below method */
    int postOrder(Node* node, int k, vector<int> &res) {
        if(!node) return 0;
        
        if (isLeaf(node)) return 1;
        
        int tot = postOrder(node -> left, k, res) + postOrder(node -> right, k, res);
        
        if (tot == k) res.push_back(node -> data);
        
        return tot;
    }

    vector<int> btWithKleaves(Node *ptr, int k) {
        vector<int> res;
        postOrder(ptr, k, res);
        
        if (res.empty()) return {-1};
        
        return res;
    }
private:
    bool isLeaf(Node* node) {
        if (!node -> left && !node -> right) return true;
        
        return false;
    }
};