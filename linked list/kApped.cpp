#include<iostream>
using namespace std;

class node{
public:  
  int value;
  node *next;
  
  node(){
    value = 0;
    next = NULL;
  }
};

class list{
public:  
  node *head;
  
  list(){
    head=NULL;
  }
  
  void insert_front(int n){
    node *temp = new node;
    temp -> value = n;
    if(head==NULL){
      head = temp;
      return;
    }
    
    temp -> next = head;
    head = temp;
  }
  
  void insert_tail(int n){
    node *temp = new node;
    temp -> value = n;
    
    if(head==NULL){
      head = temp;
      return;
    }
    node *tail = head;
    
    while(tail->next!=NULL){
      tail = tail -> next;
    }
    
    tail -> next = temp;
    return;
  }
};

node *solve(node *head, int k, int n){
  if(head->next==NULL || head==NULL){
    return head;
  }
  
  int t=k%n;
  
  int jumps = n-t-1;
  
  if(jumps<0){
    return head;
  }
  node *n1 = head;
  while(jumps--){
    n1 = n1->next;
  }
  
  node *head_sec = n1 -> next;
  n1->next = NULL;
  
  node *n2 = head_sec;
  
  while(n2->next != NULL){
    n2 = n2->next;
  }
  
  n2 -> next = head;
  
  head = head_sec;
  return head;
}

void display(node *head){
  while(head!=NULL){
    cout << head->value << " ";
    head = head -> next;
  }
}

int main() {
	int n,k,x;
	cin>>n;
	list l;
	for(int i=0;i<n;i++){
	  cin>>x;
	  l.insert_tail(x);
	}
	cin>>k;
	
	node *a = solve(l.head,k,n);
	
	display(a);
	
	return 0;
}