#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data= val;
        next= NULL;
    }
};

int main(){
    Node* first= new Node(10);
    Node* second= new Node(20);
    Node* third= new Node(30);

    first->next= second;
    second->next=third;

    Node* head= first;

    Node* newNode= new Node(40); //create new node

    //reach new node:
    Node* temp= head;
    while(temp->next!= NULL){
        temp=temp->next; //we use temp->next != NULL (used to visit EVERY node) instead of temp!=NULL as we want to stop at the last node
    }

    //now connect the last node

    temp->next = newNode;

    //print the list 
    temp= head;

    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }


    cout<<endl;

    return 0;

}