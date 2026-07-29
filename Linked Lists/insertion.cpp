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

    first->next = second;
    second->next= third;

    Node* head = first;

    Node* newNode= new Node(5); //newnode with value 5 just created

    newNode->next = head;  //attached the new node to the beginning so the head points to 5
    head=newNode;  //the head still points to 10 as well, so we change and move it to point to 5 only

    /*
    Now the linked list is: 
     head
      |
      v
      5 -> 10 -> 20 -> 30 -> NULL

*/

    Node* temp = head;

    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
}