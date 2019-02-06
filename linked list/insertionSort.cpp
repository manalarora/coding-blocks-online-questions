#include <iostream>

using namespace std;

class node{
public:
    int data;
    node* next;
    node(int d){
        data = d ;
        next = NULL;
    }
};

void insertAtHead(node*&head, int data){
    node* new_node=new node(data);
    new_node->next=NULL;
    if(head == NULL){
        head = new_node; 
        return;
    }
    node *tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    tail->next = new_node;
    return;
}



void sortedInsert(node*& head_ref, node* new_node) 
{ 
    node* current; 
    /* Special case for the head end */
    if (head_ref == NULL || (head_ref)->data >= new_node->data) 
    { 
        new_node->next = head_ref; 
        head_ref = new_node; 
    } 
    else
    { 
        /* Locate the node before the point of insertion */
        current = head_ref; 
        while (current->next!=NULL && 
               current->next->data < new_node->data) 
        { 
            current = current->next; 
        } 
        new_node->next = current->next; 
        current->next = new_node; 
    } 
} 


void insertionSort(node*& head_ref) 
{ 
    // Initialize sorted linked list 
    node *sorted = NULL; 
  
    // Traverse the given linked list and insert every 
    // node to sorted 
    node *current = head_ref; 
    while (current != NULL) 
    { 
        // Store next for next iteration 
        node *next = current->next; 
  
        // insert current in sorted linked list 
        sortedInsert(sorted, current); 
  
        // Update current 
        current = next; 
    } 
  
    // Update head_ref to point to sorted linked list 
    head_ref = sorted; 
} 


void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}


int main(int argc, char const *argv[])
{
    node* head =NULL;
    int m;cin>>m;
    while(m--){
      int val;
      cin>>val;
      insertAtHead(head, val);
    }

    insertionSort(head);
    print(head);
    return 0;
}