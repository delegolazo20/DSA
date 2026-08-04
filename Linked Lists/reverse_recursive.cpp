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

void printlist(Node* head){ //function to print list
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* reverse(Node* head){
    // base case
    if(head==NULL || head->next == NULL){
        return head;
    }
    //reverse remaining list:
    Node* newHead= reverse (head->next);

    //reverse the current link:
    head->next->next= head;

    //break old link:
    head->next=NULL;

    //return new head:
    return newHead;

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

    Node* head= first;

    cout<<"Original linked list: ";
    printlist(head);

    //now reverse the list:
    head=reverse(head);

    //print the updated list:
    cout<<"Reversed list is: ";
    printlist(head);

    return 0;
}