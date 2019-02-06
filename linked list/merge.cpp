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



node* midPoint(node*head){
    node* slow = head;
    node* fast = head->next;
    while(fast->next!=NULL && fast!=NULL ){
        slow=slow->next;
        fast = fast->next->next;
    }
    return slow;
}

void print(node*head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

node* merge(node* a, node* b);

node* mergeSort(node*l){
	if(l==NULL || l->next==NULL){
		return l;
	}

	node*mid =  midPoint(l);
	node*a = l;
	node*b = mid->next;
	mid->next = NULL;

	a = mergeSort(a);
	b = mergeSort(b);

	return merge(a,b);

}
node* merge(node* a, node* b){
    if(a==NULL){
		return b;
	}
	if(b==NULL){
		return a;
	}

    node*c;
	if(a->data < b->data){
		c = a;
		c->next = merge(a->next,b);
	}
	else{
		c=b;
		c->next = merge(a,b->next);
	}
	return c;
}


int main(){
  int t;
  cin>>t;
  while(t--){
    node* head1 = NULL;
    node* head2 = NULL;
    int l;cin>>l;
    while(l--){
      int val;
      cin>>val;
      insertAtHead(head1, val);
    }
    int m;cin>>m;
    while(m--){
      int val;
      cin>>val;
      insertAtHead(head2, val);
    }
    
    node* temp =NULL;
    temp = merge(head1, head2);
    
    print(temp);
  }
 return 0;
}
