#include<iostream>
using namespace std;
class Node {
public:
    int val;
    Node *next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void displayRec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";    //kaam //TC=O(n)
    displayRec(head->next);   //call   //SC=O(n)
}

void reverseDisplay(Node *head){
     if(head==NULL) return;
    reverseDisplay(head->next);   //call
    cout<<head->val<<" ";  //kaam
  
}

int size(Node* head){
       Node* temp=head;
       int n=0;
    while(temp!=NULL){
        n++;
        temp = temp->next;
    }
    return n;
}

void insertAtEnd(Node* head, int val){
    Node* t= new Node(val);
    while(head->next!=NULL) head=head->next;
    head->next=t;
}



int main(){

Node* a=new Node(10);
Node* b=new Node(20);
Node* c=new Node(30);
Node* d=new Node(40);
a->next=b;
b->next=c;
c->next=d;
 
  cout<<a->next->next->next->val<<endl;

 Node* temp=a;
    while(temp!=NULL){
    cout<<temp->val<<" ";
    temp=temp->next;
    }

  display(a);

  cout<<size(a)<<endl;

  displayRec(a);
  //reverseDisplay
  cout<<endl;
  reverseDisplay(a);
  //insert
  insertAtEnd(a,80);
  display(a);

}
