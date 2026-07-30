#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first->next= second;
    second->next= third;

    Node* head= first;

    Node* prev=NULL;
    Node* nextNode=NULL;
    Node* curr=head;

    while(curr!=NULL){

        nextNode= curr->next; //1. first set the nextnode to 20 to save the linked list from getting erased, while curr still points to head, i.e, 10
        curr->next=prev; //now we break the connection of 10 and 20, for that we set the element after 10 to null
        prev=curr; // we also set prev to point to the same element as curr, i.e., 10
        curr=nextNode;//lastly we change and set curr to nextNode,i.e., 20, on which we will work on the next iteration.....the nextNode is still at 20
    }

    head=prev; //after completion of loop the head is still at 10, we change that and set it to the last remaining element whose pointer is prev, i.e., 30

    //print updated list
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;
    return 0;
}