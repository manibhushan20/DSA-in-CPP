#include <iostream>  
using namespace std;


 int getElement(int idx){
      if(idx<0 || idx>=size) {
        cout<<"Invalid Index!!";
        return -1;
      }
      else if(idx==0) return head->val;
      else if(idx==size-1) return tail->val;
      else{
        Node* temp=head;
        for(int i=1;i<=idx;i++){
          temp=temp->next;
        }
     return  temp->val;
      }
    }

class Node {
public:
    int val;
    Node* next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList {
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList() {
        head = tail = NULL;
        size = 0;
    }

    void insertAtTail(int val) {
        Node* temp = new Node(val);
        if (size == 0) head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    
    void insertAtHead(int val) {
        Node* temp = new Node(val);
        if (size == 0) head = tail = temp;
        else {
            temp->next = head;
            head = temp;
        }
        size++;
    }

      void insertAtIdx(int idx, int val) {
        if(idx<0 || idx>size) cout<<"Invalid Index!!"<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtTail(val);
        else {
         Node* t= new Node(val);
         Node* temp=head;
         for(int i=1;i<=idx-1;i++){
          temp = temp->next;
         }
       t->next=temp->next;
       temp->next=t;
       size++;
        }
    }

 

 void deleteAtHead() {
  if(size==0) {
    cout<<"List is empty!!"<<endl;
    return;
  }
  head=head->next;
  size--;
    }

void deleteAtTail() {
    if (size == 0) {
        cout << "List is empty!!" << endl;
        return;
    } else if (size == 1) {
        head = tail = NULL;
        size = 0;
    } else {
        Node* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
}

void deleteAtIdx(int idx){
  if(idx<0 || idx>=size){
    cout<<"Invalid Index!!"<<endl;
    return;
  }
  else if(idx==0) return deleteAtHead();
  else if(idx==size-1) return deleteAtTail();
  else{
    Node* temp=head;
    for(int i=1;i<=idx-1;i++){
      temp=temp->next;
    }
    temp->next=temp->next->next;
    size--;
  }
}

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;
    ll.insertAtTail(10);
    ll.display();
    ll.insertAtTail(20);
    ll.display();
    ll.insertAtTail(30);
    ll.insertAtTail(50);
    ll.display();
    cout<<ll.size<<endl;
    ll.insertAtHead(80);
    ll.display();
    ll.insertAtIdx(2,45);
    ll.display();
   cout<<ll.getElement(2)<<endl;
   ll.deleteAtHead();
   ll.display();
   ll.deleteAtTail();
   ll.display();
   ll.deleteAtIdx(2);
   ll.display();
}
