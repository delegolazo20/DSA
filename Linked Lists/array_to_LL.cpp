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
    int arr[5]={10,20,30,40,50};
    int n=5;

    Node* head= new Node(arr[0]); //create new node
    Node* mover= head; //pointer used to build list

    for(int i=1; i<n; i++){  //loop for creating the other nodes
        Node* newNode = new Node(arr[i]);
        mover->next=newNode;
        mover=mover->next;
    }

    //print the list

    Node* temp= head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return 0;

}