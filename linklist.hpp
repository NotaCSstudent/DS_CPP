#ifndef LINKLIST_
#define LINKLIST_


struct Node
{
    int data;
    Node* next;
    Node* prev;
    Node(int x=0) : data(x),next(nullptr),prev(nullptr){}

};


void insert_node(int x,Node* &root)
{
    if(root == nullptr)
    {
        root = new Node(x);
    }
    insert_node(x,root->next);
    root->next->prev = root;
}

#endif