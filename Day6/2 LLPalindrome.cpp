// Check if Linked List is a Palindrome or Not
// Code contributed By Himanshu Kaushik (linkedin.com/in/himanshu-kaushik-a7862516b)

#include <bits/stdc++.h>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

bool isPalindrome(Node *head){
    stack<int> st;
    int n = 0;
    Node *temp = head;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    int odd = (n%2 == 0)?0:1;
    n /= 2;
    temp = head;
    for(int i=0; i<n; i++){
        st.push(temp->data);
        temp = temp->next;
    }
    if(odd) temp = temp->next;
    while(temp != NULL){
        int ele = st.top();
        if(ele != temp->data) return 0;
        temp = temp->next;
        st.pop();
    }
    return 1;
}
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}
