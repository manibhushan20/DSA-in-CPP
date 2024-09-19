#include <iostream>
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

int main()
{
    // Node a;
    // a.val = 10;
    // Node b;
    // b.val = 20;
    // Node c;
    // c.val = 30;
    // Node d;
    // d.val = 40;

    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);

    // fporming linkedList
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;

    cout<<&b<<endl;
    cout<<a.val<<endl;
    cout<<(*(a.next)).val<<endl;
    cout<<(a.next)->val<<endl;;
    cout<<((a.next)->next)->val<<endl;
    cout<<(((a.next)->next)->next)->val<<endl;;

    Node temp=a;
    while(1){
        cout<<temp.val<<" ";
        if(temp.next==NULL) break;
        temp=*(temp.next);
    }
}