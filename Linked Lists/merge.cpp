#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* mergeList(Node* first, Node* second){
    // Create a dummy node
    Node* dummy= new Node(-1);

    // Tail always points to the last node of merged list
    Node* tail= dummy;

    while(first!=NULL && second!=NULL){
        if(first->data <= second->data){
            tail->next=first;
            first=first->next;
        }
        else{
            tail->next=second;
            second=second->next;
        }
        tail=tail->next;
    }

    // Attach remaining nodes
    if(first!=NULL){
        tail->next=first;
    }

    if(second!=NULL){
        tail->next=second;
    }

    // Return head of merged list
    return dummy->next;
}

int main() {
    Node* first1 = new Node(1);
    Node* second1 = new Node(3);
    Node* third1 = new Node(5);
    Node* fourth1 = new Node(7);

    first1->next = second1;
    second1->next = third1;
    third1->next = fourth1;

    Node* head1 = first1;

    // -------- Second Linked List --------
    Node* first2 = new Node(2);
    Node* second2 = new Node(4);
    Node* third2 = new Node(6);
    Node* fourth2 = new Node(8);

    first2->next = second2;
    second2->next = third2;
    third2->next = fourth2;

    Node* head2 = first2;

    cout << "First List : ";
    printList(head1);

    cout << "Second List: ";
    printList(head2);

    Node* mergedHead= mergeList(head1, head2);

    cout<<"Merged list: ";
    printList(mergedHead);

    return 0;
}