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

Node* mergeSort(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }

    Node* slow=head;
    Node* fast= head;
    Node* prev=NULL;

    while(fast!=NULL && fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }

    prev->next= NULL;
    Node* left = mergeSort(head);
    Node* right = mergeSort(slow);

    return mergeList(left, right);
}

int main() {
    Node* first1 = new Node(5);
    Node* second1 = new Node(7);
    Node* third1 = new Node(1);
    Node* fourth1 = new Node(3);

    first1->next = second1;
    second1->next = third1;
    third1->next = fourth1;

    Node* head1 = first1;

    // -------- Second Linked List --------
    Node* first2 = new Node(6);
    Node* second2 = new Node(8);
    Node* third2 = new Node(2);
    Node* fourth2 = new Node(4);

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

    // Optionally sort the merged list using mergeSort
    Node* sorted = mergeSort(mergedHead);
    cout<<"Sorted merged list: ";
    printList(sorted);

    return 0;
}