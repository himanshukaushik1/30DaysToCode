// Remove nth node from the end of the Linked List
// Code contributed By Himanshu Kaushik (linkedin.com/in/himanshu-kaushik-a7862516b)

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
} 

Node* delete_nth(Node *head, int n){
    if(n == 0){
        return head;
    }
    Node* temp = head;
    int m = 0;
    while(temp != NULL){
        m++;
        temp = temp->next;
    }
    if(m == n){
        head = head->next;
        return head;
    }
    int i = 0;
    temp = head;
    while(i<(m-n-1)){
        temp = temp->next;
        i++;
    }
        temp->next = temp->next->next;

    return head;
}

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
        cin >> n;
		head = delete_nth(head, n);
        printList(head);
	}
	return 0; 
} 