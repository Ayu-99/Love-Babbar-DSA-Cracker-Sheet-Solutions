#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int d){
            data = d;
            next = NULL;
        }
};

Node* deleteFromStart(Node* head){
    return head->next;
}

Node* deleteGivenNode(Node* head, int val){
    
    if(head-> data == val){
        return head->next;
    }

    Node* temp = head, *prev = NULL;
    while(temp->data != val){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    return head;
}

void deleteFromEnd(Node* head){
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    } 
    temp->next = NULL;
}

void printList(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);

    head->next = second;
    second->next = third;
    third->next = fourth;

    head = deleteFromStart(head);
    // head = deleteGivenNode(head,30);
    // deleteFromEnd(head);
    printList(head);

}
