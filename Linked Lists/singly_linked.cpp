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

    //first create three nodes
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    // Current situation:
    //
    // first  ---> [10 | NULL]
    // second ---> [20 | NULL]
    // third  ---> [30 | NULL]
    //
    // They exist independently.

    //now we connect the nodes

    first->next = second;
    second->next= third;

    /* Now the list looks like:
     first
       |
       v
    [10 | *] ----> [20 | *] ----> [30 | NULL] */

    //assign the node head next

    Node* head = first;

    /* now it looks like:
       head
       |
       v
     [10] -> [20] -> [30] -> NULL   */

     //now that the list is created, we traverse and print

     Node* temp= head;

     while(temp!= NULL){
        cout<<"Node Address: "<<temp<<endl;
        cout<<"Data: "<<temp->data<<endl;
        cout<<"Next address: "<<temp->next<<endl;
        cout<<"------------------"<<endl;

        temp= temp->next;
     }

     cout<<endl;


     return 0;
}