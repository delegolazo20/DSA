#include <iostream>
using namespace std;

//deletion of a cycle using slow and fast pointers (optimal method)

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

void printList(Node* head){
    Node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


void removeCycle(Node* head){
    Node* slow= head;
    Node* fast= head;

    while(fast!= NULL && fast->next!=NULL){
        slow= slow->next;
        fast=fast->next->next;

        if(slow==fast){
            Node* entry= head;

            while(entry!=slow){
                entry= entry->next;
                slow=slow->next;
            }

            Node* temp=entry;

            while(temp->next!=entry){ //finding last node
                temp=temp->next;
            }

            temp->next=NULL; //breaking the last node and connecting 50 to NULL
            return;
        }
    }
}

int main(){
    
    //creating the list with cycle
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

    Node* head=first;

    removeCycle(head);
    printList(head);

    return 0;
}