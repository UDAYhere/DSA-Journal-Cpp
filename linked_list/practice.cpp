#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class list
{
    node *head;
    node *tail;

public:
    list()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        node *newNode = new node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void print(){
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main()
{
    push_front
    return 0;
}