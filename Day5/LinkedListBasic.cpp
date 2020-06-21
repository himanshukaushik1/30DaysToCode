// This module covers the basic of linkedlist implementation such as insertion, deletion etc. Comment the part you need to check out
// as it is not menu driven !!

// Code contributed By Himanshu Kaushik (linkedin.com/in/himanshu-kaushik-a7862516b)

#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
}*head;

void insert_end(int x){
    node* temp = new node;
    temp->data = x;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
        return;
    }
    node* start = head;
    while(start->next != NULL){
        start = start->next;
    }
    start->next = temp;
    return;
}
void insert_beg(int x){
    node* temp = new node;
    temp->data = x;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
        return;
    }
    // cout << "\nIt worked till here\n";
    temp->next = head;
    head = temp;
}
void insert_pos(int x, int n){
    int i = 0;
    node* temp = new node;
    temp->data = x;
    temp->next = NULL;
    node* start = head;
    while(i<n-2 and start!=NULL){
        start = start->next;
        i++;
    }
    temp->next = start->next;
    start->next = temp;

}
void delete_beg(){
    node* temp = head;
    if(head == NULL){
        cout << "Underflow\n";
        return;
    }
    head = head->next;
    free(temp);
}
void delete_end(){
    node* temp = head;
    if(temp == NULL){
        return;
    }
    if(temp->next == NULL){
        head = NULL;
        return;
    }
    while(temp->next->next!= NULL){
        temp = temp->next;   
    }
    delete(temp->next);
    temp->next = NULL;
}
void delete_pos(int n){
    node* temp = head;
    int i = 0;
    if(temp == NULL){
        return;
    }
    if(temp->next == NULL){
        head = NULL;
    }
    while(i<n-2 and temp->next->next!= NULL){
        i++;
        temp = temp->next;
    }
    node* temp1 = temp->next;
    temp->next = temp->next->next;
    delete(temp1);
}

void display(){
    node* start = head;
    while(start != NULL){
        cout << start->data << " ";
        start = start->next;
    }
    cout << endl;
}

int main(){
    head = NULL;
    int n;
    cout << "Enter Number of elements to be inserted in end: ";
    cin >> n;
    cout << "\nEnter Values : \n";
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        insert_end(temp);
    }
    cout << "\nValues after insertion in end: ";
    display();
    cout << "\nEnter number of values for insertion at beginning: ";
    cin >> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        insert_beg(temp);
    }
    cout << "\nValues after insertion in beginning: ";
    display();
    cout << "\nEnter value to be inserted and position respectively: ";
    int x;
    cin >> x >> n;
    insert_pos(x, n);
    cout << "\nValues after insertion at given Position: ";
    display();
    cout << "\nAfter Deleting from beginning: ";
    delete_beg();
    display();
    cout << "\nAfter Deleting from end: ";
    delete_end();
    display();
    cout << "Enter Position to delete: ";
    cin >> n;
    delete_pos(n);
    cout << "\nAfter deletind from pos: ";
    display();

    return 0;
}