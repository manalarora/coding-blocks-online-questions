#include<iostream>
#include<list>

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
void print(node*head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

void insertAtHead(node*&head, int data){
    if(head==NULL){
        head = new node(data);
        return;
    }

    node*n = new node(data);
	node*temp = head;
    while(temp->next!=NULL);
    temp->next = n;
    
}
node* reverse(node*& head, int count)
    
    node* current = head; 
    node* next = NULL; 
    node* prev = NULL; 
    int k = 0;   

    while (current != NULL && count < k) 
    { 
        next  = current->next; 
        current->next = prev; 
        prev = current; 
        current = next; 
        count++; 
    } 
      
    if (next !=  NULL) 
       head->next = reverse(next, k);  
  
    /* prev is new head of the input list */
    return prev; 



int main(int argc, char const *argv[])
{
	int n, k;
	cin>>n>>k;
	int t = n;
	node* head = NULL;
	while(t--){

		int data;
		cin>>data;
		insertAtHead(head, data);
	}
	node* newHead =NULL;
	newHead = reverse(head,k);

	print(newHead);


	


	return 0;
}

