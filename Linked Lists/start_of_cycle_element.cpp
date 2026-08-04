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

Node* detectcycle(Node* head){

    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){

        slow=slow->next;
        fast=fast->next->next;
        
        if(slow==fast){
            Node* entry= head;

            while(entry!=slow){
                entry=entry->next;
                slow=slow->next;
            }

            return entry;
        }
    }

    return NULL;
}


int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    
    

    first->next= second;
    second->next= third;
    third->next= fourth;
    fourth->next= fifth;

    fifth->next=third;

    Node* head= first;

    Node* start= detectcycle(head);

    if(start!= NULL){
        cout<<"Cycle starts at node: "<<start->data<<endl;
    }

    else cout<<"No cycle found!";

}