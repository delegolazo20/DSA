#include <iostream>
using namespace std;

//print the count of nodes 

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

    int count=0;

    Node* temp=head;

    while(temp!=NULL){
        count++;
        temp=temp->next;
    }

    cout<<"Number of nodes: "<<count;

    return 0;

}