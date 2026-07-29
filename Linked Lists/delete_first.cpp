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

    Node* temp=head; //create temporary for head
    head=temp->next; //shift head to 20
    delete temp; //delete memory of first node

    //print updated list

    temp=head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
    }

    cout<<endl;

    return 0;
}