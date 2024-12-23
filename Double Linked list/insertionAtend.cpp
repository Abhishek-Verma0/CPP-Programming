#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        data=d;
        prev=nullptr;
        next=nullptr;
    }
};

Node* createNode(Node *head,int value){
    Node* newNode=new Node(value);

    if(head==nullptr){
        head=newNode;
    }
    else{
        Node* curr=head;
        while(curr->next!=nullptr){
            curr=curr->next;
        }
        curr->next=newNode;
        newNode->prev=curr;
    }
    return head;
}

void display(Node* head){
    Node* curr=head;
    while(curr!=nullptr){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}



int main(){
    Node* head=nullptr;
    int n,val;
    cout<<"Enter the number of nodes you need :: ";
    cin>>n;
    cout<<"Enter the value of the nodes :: ";
    for(int i=0;i<n;i++){
        cin>>val;
        head=createNode(head,val);

    }


    cout<<"Printing the nodes of double  linked list :: ";
    display(head);


}

//  why this is not working 



