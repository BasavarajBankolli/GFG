/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        // code here
        Node *t = head, *tmp;
        
        if (t -> data >= data){
            tmp = t;
            Node *nw = new Node(data);
            nw -> next = tmp;
            
            Node *dummy = t;
            dummy = dummy -> next;
            while (dummy -> next != head){
                dummy = dummy -> next;
            }
            dummy -> next = nw;
            return nw;
        }        

        while (t -> next) {
            if (t -> next -> data >= data  || t -> next == head){
                break;
            }
            t = t->next;
        }
        
        tmp  = t -> next;
        t -> next = new Node(data);
        
        t = t -> next;
        t -> next = tmp;
        
        return head;
    }
};