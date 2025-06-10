// Student database management system:
// A university wants to maintain a database of students where each student is identified by a unique student ID. the system should allow tghe following operations efficiently:

// -->insert a new student.
// -->search for a student by their ID.
// -->display all students in stored order of their IDs.
// -->implement all the above operations by using a BST.
#include<iostream>
using namespace std;

class node{
    public:
    int root;
    node* leftChild;
    node* rightChild;

    node(int val){
        root=val;
        leftChild=NULL;
        rightChild=NULL;
    }
};