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
    Node* first= new Node(10);
    Node* second= new Node(20);
    Node* third= new Node(30);

    first->next=second;
    second->next=third;

    Node* head=first;

    Node* temp= head;
    while(temp->next->next != NULL){
        temp=temp->next;
    }

    delete temp->next;
    temp->next= NULL; //we have to set the deleted address as NULL, or else it will be a dangling pointer

    //print updated list
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return 0;

}