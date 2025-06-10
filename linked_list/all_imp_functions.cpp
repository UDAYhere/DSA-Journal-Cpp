#include <iostream>
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

    // This is the function which insert the value in the begining of the linkedlist
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

    // this function insert the value in the end of the linkedlist
    void push_back(int val)
    {
        node *newNode = new node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    // now this is the function which i am using to print the linkedlist
    void print()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }

    // this is the function which delete the element form the front
    void pop_front()
    {
        if (head == NULL)
        {
            cout << "linkedlist is empty\n";
            return;
        }
        node *temp = head;
        head = head->next;
        delete temp;
    }

    // this function will delete the element form the back
    void pop_back()
    {
        if (head == NULL)
        {
            cout << "linkedlist is empty\n";
            return;
        }
        node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    // this is the function which will insert the value in the middle of the linkedlist
    void insert(int val, int pos)
    {
        if (pos < 0)
        {
            cout << "invalid position\n";
            return;
        }
        if (pos == 0)
        {
            push_front(val);
        }
        node *temp = head;
        for (int i = 1; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "invalid position\n";
                return;
            }
            temp = temp->next;
        }
        node *newNode = new node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }
};

int main()
{
    list a;
    cout << "******MAIN MENU******\n";
    cout << "Enter 1 for push_front\n";
    cout << "Enter 2 for push_back\n";
    cout << "Enter 3 for pop_front\n";
    cout << "Enter 4 for pop_back\n";
    cout << "Enter 5 for insert at random\n";
    cout << "Enter 6 to print the linkedlist\n";
    cout << "Enter 7 to exit\n";

    int choice;
    cin >> choice;
    while (choice >= 1 && choice <= 7)
    {
        switch (choice)
        {
        case 1:
            cout << "Enter the element you want to insert in the linkedlist:\n";
            int val;
            cin >> val;
            a.push_front(val);
            break;

        case 2:
            cout << "Enter the element you want to insert in the linkedlist:\n";
            cin >> val;
            a.push_back(val);
            break;

        case 3:
            a.pop_front();
            break;

        case 4:
            a.pop_back();

        case 5:
            cout << "Enter the element you want to insert in the linked list: \n";
            cin >> val;
            cout << "Enter the position where you want to insert the value:\n";
            int pos;
            cin >> pos;
            a.insert(val, pos);
            break;

        case 6:
            a.print();
            break;

        case 7:
            cout << "Logging of.................\n";
            break;

        default:
            break;
        }
        cout << "Enter your choice again\n";
        cin >> choice;
    }
    if (choice >= 8)
    {
        cout << "**************INVALID CHOICE*******************";
    }
    return 0;
}