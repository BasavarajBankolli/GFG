//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void loopHere(Node *head, Node *tail, int position) {
    if (position == 0)
        return;

    Node *walk = head;
    for (int i = 1; i < position; i++)
        walk = walk->next;
    tail->next = walk;
}


// } Driver Code Ends

/*
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        unordered_set <Node*> st;
        int cnt = 0;
        Node *n = NULL;
        for(Node* tmp = head; tmp != NULL; tmp = tmp -> next) {
            cnt++;
            if(st.find(tmp) != st.end()) {
                n = tmp;
                break;
            }
            st.insert(tmp);
        }
        

        int cnt1 = 0;
        if (!n) return 0;
        else{
            for (Node* tmp = head; tmp != NULL; tmp = tmp -> next){
                cnt1++;
                if (tmp == n){
                    break;
                }
            }
        }
        
        return cnt - cnt1;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int k;
        cin >> k;
        cin.ignore();
        struct Node *head = new Node(arr[0]);
        struct Node *tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
        loopHere(head, tail, k);

        Solution ob;
        cout << ob.countNodesinLoop(head) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends