// Add two number represented as Linked List
// Code contributed By Himanshu Kaushik (linkedin.com/in/himanshu-kaushik-a7862516b)

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void push(struct Node** head_ref, int new_data) {
    struct Node* new_Node = new Node(new_data);
    new_Node->next = (*head_ref);
    (*head_ref) = new_Node;
}
void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}
void freeList(struct Node* Node) {
    struct Node* temp;
    while (Node != NULL) {
        temp = Node;
        Node = Node->next;
        free(temp);
    }
}

Node* addTwoLists(Node* first, Node* second) {
    // Code here
    int carry = 0;
    Node* temp1 = first, *temp2 = second;
    int n=0, m=0, s = 0;
    Node *head = new Node(0), *t;
    Node *temp = head;
    while(temp1!=NULL || temp2!=NULL){
        n = 0;
        m = 0;
        if(temp1!=NULL) n = temp1->data;
        if(temp2!=NULL) m = temp2->data;
        s = carry + n + m;
        carry = (s>=10)?1:0;
        temp->next = new Node(s%10);
        temp = temp->next;
        
        if(temp1 != NULL) temp1 = temp1->next;
        if(temp2 != NULL) temp2 = temp2->next;
    }
    if(carry){
        temp->next = new Node(carry);
    }
    return head->next;
}

int main(void) {
    int t, n, m, i, x;
    cin >> t;
    while (t--) {
        struct Node* res = NULL;
        struct Node* first = NULL;
        struct Node* second = NULL;
        cin >> n;
        for (i = 0; i < n; i++) {
            cin >> x;
            push(&first, x);
        }
        cin >> m;
        for (i = 0; i < m; i++) {
            cin >> x;
            push(&second, x);
        }
        res = addTwoLists(first, second);
        printList(res);
        if (first) freeList(first);
        if (second) freeList(second);
    }
    return 0;
}
