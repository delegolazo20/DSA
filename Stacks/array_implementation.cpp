#include <iostream>
#include <stack>
using namespace std;

class Stack {
    private:
    int arr[3];
    int top;

    public:
    Stack(){
        top=-1;
    }

    //pushing values to array:
    void push(int value){
        if(top==2){
            cout<<"Stack overflow!"<<endl;
            return ;
        }
        top++;
        arr[top]=value;
        cout<<value<<" pushed into stack "<<endl;
    }

    //peek:  (used to return the top element currently)
    int peek(){
        if(top==-1){
            cout<<"Stack is empty!"<<endl;
            return -1;
        }
        return arr[top];
    }

    //size:
    int size(){
        return top+1;
    }

    //pop:
    void pop(){
        if(top==-1){
            cout<<"Stack overflow!"<<endl;
            return;
        }
        top--;
    }

    //check empty:
    bool isEmpty(){
        return top==-1;
    }

    //check full:
    bool isFull(){
        return top==2;
    }

    //display:
    void display(){
        if(top==-1){
            cout<<"Stack is empty\n";
            return;
        }
        for(int i=top; i>=0; i--){
            cout<<arr[i]<<" ";
        }

        cout<<endl;
    }
};

int main(){
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout<<"-------------------"<<endl;

    cout<<"Stack: ";
    st.display();
    cout<<"Top: "<<st.peek()<<endl;
    cout<<"Size: "<<st.size()<<endl;
    cout<<"-------------------"<<endl;

    st.pop();

    cout<<"Stack after pop: ";
    st.display();
    cout<<"Top after pop: "<<st.peek()<<endl;
    cout<<"Size now: "<<st.size()<<endl;

    return 0;
}