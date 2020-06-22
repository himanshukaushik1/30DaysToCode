// Merge Two Sorted Linked Lists
// Code contributed By Himanshu Kaushik (linkedin.com/in/himanshu-kaushik-a7862516b)

#include<iostream>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void printList(struct Node *n)
{
    while (n!=NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

Node* sortedMerge(struct Node* head1, struct Node* head2){
    Node* head = NULL;
    Node *temp1 = head1, *temp2 = head2;
    if(temp1->data <= temp2->data){
        head = head1;
        temp1 = temp1->next;
    }
    else{
        head = head2;
        temp2 = temp2->next;
    }
    Node* temp = head, *t = NULL;
    while(temp1 != NULL or temp2 != NULL){
        if(temp1 == NULL){
            temp->next = temp2;
            break;
        }
        else if(temp2 == NULL){
            temp->next = temp1;
            break;
        }
        if(temp1->data <= temp2->data){
            temp->next = temp1;
            temp = temp1;
            temp1 = temp1->next;
        }
        else{
            temp->next = temp2;
            temp = temp2;
            temp2 = temp2->next;
        }
        // cout << "T1 : " ;
        // printList(head1);
        // cout << "T2 : ";
        // printList(head2);
    }
    return head;
// 1
// 5 5
// 1 2 5 8 9
// 3 4 6 7 10 
}

int main()
{
    int T,i,n1,n2,l,k;

    cin>>T;

    while(T--)
    {
        struct Node *head1 = NULL,  *tail1 = NULL;
        struct Node *head2 = NULL,  *tail2 = NULL;

        cin>>n1>>n2;
        int d1 , d2 , temp;
        cin>>d1;
        head1 = new Node(d1);
        tail1 = head1;
        for(i=1; i<n1; i++)
        {
            cin>>temp;
            tail1->next = new Node(temp);
            tail1 = tail1->next;
        }
        cin>>d2;
        head2 = new Node(d2);
        tail2 = head2;
        for(i=1; i<n2; i++)
        {
            cin>>temp;
            tail2->next = new Node(temp);
            tail2 = tail2->next;
        }
        Node *head = sortedMerge(head1, head2);
        printList(head);
    }
    return 0;
}
