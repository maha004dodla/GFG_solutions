//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printlist(Node *head) {
    if (head == NULL)
        return;
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void append(struct Node **headRef, char data) {
    struct Node *new_node = new Node(data);
    struct Node *last = *headRef;

    if (*headRef == NULL) {
        *headRef = new_node;
        return;
    }
    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}


// } Driver Code Ends
/*
Structure of the node of the linked list is as
struct Node
{
    char data;
    struct Node *next;

    Node(char x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    int is_vowel(char a)
    {
        if(a=='a' or a=='e' or a=='i' or a=='o' or a=='u')
        {
            return 1;
        }
        return 0;
    }
    struct Node* arrangeCV(Node* head) 
    {
        Node* temp=head;
        vector<char>res1;
        vector<char>res2;
        while(temp!=NULL)
        {
            if(is_vowel(temp->data))
            {
                res1.push_back(temp->data);
            }
            else
            {
                res2.push_back(temp->data);
            }
            temp=temp->next;
        }
        for(auto i:res2)
        {
            res1.push_back(i);
        }
        temp=head;
        for(auto i:res1)
        {
            temp->data=i;
            temp=temp->next;
        }
        return head;
    }
};


//{ Driver Code Starts.

// task is to complete this function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        char tmp;
        struct Node *head = NULL;
        cin >> n;
        while (n--) {
            cin >> tmp;
            append(&head, tmp);
        }
        Solution obj;
        head = obj.arrangeCV(head);
        printlist(head);
    }
    return 0;
}

// } Driver Code Ends