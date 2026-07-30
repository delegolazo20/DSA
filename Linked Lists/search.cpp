#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next= NULL;
    }
};

int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first->next = second;
    second->next= third;

    Node* head = first;

    int key;
    cout<<"Enter the element you want to search: ";
    cin>>key;

    Node* temp= head;
    while(temp!= NULL){
        if(temp->data==key){
            cout<<"Element is present!";
            break;
        }  
        temp=temp->next; 
    }

    if(temp==NULL){
        cout<<"Element not found!";
    }
    
    cout<<endl;
    return 0;
}