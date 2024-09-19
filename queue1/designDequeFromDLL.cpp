#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Deque
{
public:
    Node *head;
    Node *tail;
    int size;
    Deque()
    {
        head = tail = NULL;
        size = 0;
    }

    void pushBack(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }

    void pushFront(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }


    void popFront()
    {
        if (size == 0)
        {
            cout << "List is empty!!" << endl;
            return;
        }
        head = head->next;
        if (head)
            head->prev = NULL;
        if (head == NULL)
            tail = NULL;
        size--;
    }

    void popBack()
    {
        if (size == 0)
        {
            cout << "List is empty!!" << endl;
            return;
        }
        if (size == 1)
        {
            popFront();
            return;
        }

        Node *temp = tail->prev;
        temp->next = NULL;
        tail = temp;
        size--;
    }

    
 int front(){
       if (size == 0)
        {
            cout << "Queue is empty!!" << endl;
            return -1;
        }
    return head->val;
 }

 
 int back(){
       if (size == 0)
        {
            cout << "Queue is empty!!" << endl;
            return -1;
        }
    return tail->val;
 }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};


int main(){
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushBack(40);
    dq.display();
    dq.popBack();
    dq.display();
    dq.popFront();
    dq.display();
    dq.pushFront(50);
    dq.display();
}