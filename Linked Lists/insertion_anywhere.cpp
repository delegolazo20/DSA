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

    Node* head=first;

    Node* newNode= new Node(25);

    int position;
    cout<<"Enter the position where you want to insert the new node: ";
    cin>>position;

    Node* temp=head;
    
    if(position == 1){
    newNode->next = head;
    head = newNode;
    }

    else{
        for(int i=1; i<position-1 && temp!=NULL; i++){
        temp=temp->next;
    }

    // Check for invalid position
    if(temp == NULL)
        {
            cout << "Invalid Position!" << endl;
            return 0;
        }

    //Insert the node
    newNode->next= temp->next;
    temp->next=newNode;
    }

    
        

    cout<<"Updated linked list: ";

    temp=head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }

    cout<<endl;

    return 0;

}