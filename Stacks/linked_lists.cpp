#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data=value;
        next=NULL;
    }
};

class Stack{
    private:
    Node* top;

    public:
    Stack(){
        top=NULL;
    }

    //Push:
    void push(int value){
        Node* newNode=new Node(value);
        newNode->next=top;
        top=newNode;
    }

    //Pop:
    void pop(){
        if(top==NULL){
            cout<<"Stack underflow!"<<endl;
            return;
        }

        Node* temp = top;
        top=top->next;
        delete temp;
    }

    //Peek:
    int peek(){
        if(top==NULL){
            cout<<"Stack is empty!\n";
            return -1;
        }
        return top->data;
    }

    //Display:
    void display(){
        Node* temp = top;
        while(temp!=NULL){
            cout<<temp->data<< " ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){

    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout<<"Stack: ";
    st.display();

    cout<<"Top: "<<st.peek()<<endl;

    cout<<"----------------------"<<endl;

    st.pop();

    cout<<"After pop: ";
    st.display();

    cout<<"Top: "<<st.peek()<<endl;

    return 0;
}