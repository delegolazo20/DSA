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

bool hasCycle(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;

        if(slow==fast){
            return true;
        }
    }

    return false;
}

int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    

    first->next= second;
    second->next= third;
    third->next= fourth;
    fourth->next= fifth;
    fifth->next= sixth;

    fifth->next=third;

    Node* head= first;

    if(hasCycle(head)){
        cout<<"Cycle detected!";
    }
    else{
        cout<<"No cycle detected!";
    }
}