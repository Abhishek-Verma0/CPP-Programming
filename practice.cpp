

//    linked list
//  insertion at begining

// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;
// };

// Node* createNode(Node* head,int value){
//     Node* newNode= new Node();
//     newNode->data=value;
//     newNode->next=head;
//     return newNode;

// }

// void display(Node* head){
//     Node* curr=head;
//     while(curr!=nullptr){
//         cout<<curr->data<<" ";
//         curr=curr->next;
//     }

// }

// int main(){
//     Node* head= nullptr;
//     int n,val;
//     cout<<"Enter number of nodes to be in the linkes list :: ";
//     cin>>n;
//     cout<<"Enter the values to be in the linked list insertion at begining :: "<<endl;

//     for(int i=0;i<n;i++){
//         cin>>val;
//         head=createNode(head,val);
//     }

//     cout<<"Printing the linked list :: ";
//     display(head);
// }

// //   ************************Insertion at end in the lineed list

// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;
// };

// Node* insertEnd(Node* head,int value){
//     Node* newNode= new Node();
//     newNode->data=value;
//     newNode->next=nullptr;

//     if(head==nullptr){
//         return newNode;
//     }
//     Node* temp= head;
//     while(temp->next!=nullptr){
//         temp=temp->next;
//     }
//     temp->next=newNode;
//     return head;
// }

// void disply(Node* head){
//     Node* curr=head;
//     while(curr!=nullptr){
//         cout<<curr->data<<" ";
//         curr=curr->next;
//     }
// }

// int main(){
//     Node * head=nullptr;
//     int n,val;

//     cout<<"Enter the number of nodes you want in the list :: ";
//     cin>>n;
//     cout<<"Enter the value of nodes to be stored at the end of linked list :: ";
//     for(int i=0;i<n;i++){
//         cin>>val;
//         head=insertEnd(head,val);
//     }

//     cout<<"Printing the nodes :: ";
//     disply(head);
// }

// //**************INsertion at k th  position or at kth node in the linked list  */

// #include <bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;
// };

// Node* insertHead(Node* head,int value){
//     Node* newNode= new Node();
//     newNode->data=value;
//     newNode->next=head;
//     return newNode;
// }

// Node* createNode(Node* head,int value){
//     Node* newNode=new Node();
//     newNode->data=value;
//     newNode->next=nullptr;

//     if(head==nullptr){
//         return newNode;
//     }
//     Node* temp= head;
//     while(temp->next!=nullptr){
//         temp=temp->next;
//     }
//     temp->next=newNode;
//     return head;
// }

// Node* insertKth(Node* head,int pos,int value,int &size){

//     if(pos<1 || pos>size+1){
//         cout<<"Invalid postion ";
//         return head;
//     }
//     if(pos==1){
//        return  insertHead(head,value);
//     }

// Node* newNode= new Node();
// newNode->data=value;

// Node* temp=head;

// for(int i=1;i<pos-1;i++){
//     temp=temp->next;
// }
// newNode->next=temp->next;
// temp->next=newNode;
// size++;
// return head;

// }

// void display(Node* head){
//     Node * curr= head;
//     while(curr!=nullptr){
//         cout<<curr->data<<" ";
//         curr=curr->next;
//     }
// }

// int main(){

//     Node * head=nullptr;
//     int n,pos,value,val;
//     cout<<"Enter the number of nodes you want in the linked list :: ";
//     cin>>n;
//     cout<<"Enter the  value of which you want to store in the list :: ";

//     for(int i=0;i<n;i++){
//         cin>>value;
//         head=createNode(head,value);
//     }

//     cout<<"Printing before inserting at kth position :: ";
//     display(head);

//     cout<<"Enter the valid position to insert element :: ";
//     cin>>pos;
//     cout<<"Enter the value to be inserted :: ";
//     cin>>val;
//     head=insertKth(head,pos,val,n);

//     cout<<endl;
//     cout<<"Printing after insertion at kth node :: ";
//     display(head);

// }

// // Basic to class is done with the help of constructor function
// #include <iostream>
// using namespace std;
// class Time
// {
// private:
//     int h, m;

// public:
//     Time()
//     {
//         h = m = 0;
//     }
//     Time(int t)
//     {
//         h = t / 60;
//         m = t % 60;
//     }
//     void show_data()
//     {
//         cout << h << "hrs" << m << "mins";
//     }
// };
// int main()
// {
//     int min;
//     cout << "\n Enter the minutes:";
//     cin >> min;
//     Time T1;
//     T1 = min; // It will call the constructor function after taking minutes
//     T1.show_data();
// }

// //  binary tree

// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         this->data=val;
//         this->left=nullptr;
//         this->right=nullptr;
//     }
// };

// Node* createTree(Node* root){
//     int val;
//     cout<<"Enter the data :: ";
//     cin>>val;
//     root= new Node(val);
//     if(val==-1){
//         return nullptr;
//     }

//     cout<<"Enter the data for inserting to the left of "<<val<<endl;
//     root->left=createTree(root->left);
//     cout<<"Enter  the data for inserting to the right of "<<val<<endl;
//     root->right=createTree(root->right);
//     return root;

// }

// void inorder(Node *root){
//     if(root==nullptr){
//         return ;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

// int main(){
//     Node* root=nullptr;

//     root=createTree(root);
//     inorder(root);
// }

//  binary treee
//  inorder
// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int d){
//         this->data=d;
//         this->left=nullptr;
//         this->right=nullptr;
//     }
// };

// Node* create(Node* root){
//     int val;
//     cout<<"Enter the data :: ";
//     cin>>val;
//     root=new Node(val);
//     if(val==-1){
//         return nullptr;
//     }
//     cout<<"Enter the left child of the "<<val<<endl;
//     root->left=create(root->left);
//     cout<<"Enter the right of the "<<val<<endl;
//     root->right=create(root->right);
//     return root;
// }

// //  inorder traversal
// void inorder(Node* root){
//     if(root==nullptr){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<' ';
//     inorder(root->right);
// }

// int main(){
//     Node* root=nullptr;
//     root=create(root);
//     inorder(root);
// }

// #include<bits/stdc++.h>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int d){
//         this->data=d;
//         this->left=nullptr;
//         this->right=nullptr;
//     }
// };

// Node* insert(Node* root){
//     int val;
//     cout<<"Enter the data :";
//     cin>>val;
//     root=new Node(val);
//     if(val==-1){
//         return  nullptr;
//     }
//     cout<<"Enter the data for the left of "<<val<<endl;
//     root->left=insert(root->left);
//     cout<<"Enter the data for the right of "<<val<<endl;
//     root->right=insert(root->right);
//     return root;
// }

// void preorder(Node* root){
//     if(root==nullptr){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }

// int main(){

//     Node* root=nullptr;
//     root=insert(root);
//     preorder(root);
// }

/**** Practice of binary tree code  */

// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int d){
//         this->data=d;
//         this->left=nullptr;
//         this->right=nullptr;
//     }
// };

// Node* create(Node* root){
//     cout<<"Enter the data :: ";
//     int val;
//     cin>>val;
//     if(val==-1){
//         return  nullptr;
//     }
//     root=new Node(val);
//     cout<<"Enter the data for left of "<<val<<endl;
//     root->left=create(root->left);
//     cout<<"Enter the data for the right of "<<val<<endl;
//     root->right=create(root->right);
//     return root;
// }

// //  inorder is left root right
// void inorder(Node *root){
//     if(root==nullptr){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);

// }

// int main(){
//     Node* root=nullptr;
//     root=create(root);
//     inorder(root);
// }

/**    preorder traversal */
// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         this->data=val;
//         this->left=nullptr;
//         this->right=nullptr;
//     }
// };

// Node* create(Node* root){
//     int val;
//     cout<<"Enter the data :: ";
//     cin>>val;
//     if(val==-1){
//         return nullptr;
//     }

//     root=new Node(val);

//     cout<<"Enter the data for the left of :: "<<val<<endl;
//     root->left=create(root->left);
//     cout<<"Enter the data for the right of :: "<<val<<endl;
//     root->right=create(root->right);
//     return root;
// }

// //  preorder is root left right
// void preoder(Node* root){
//         if(root==nullptr){
//             return;
//         }
//         cout<<root->data<<" ";
//         preoder(root->left);
//         preoder(root->right);
// }

// int main(){
//     Node* root=nullptr;
//     root=create(root);
//     preoder(root);
// }

/*** Post order  */

// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         this->data= val;
//         this->right=nullptr;
//         this->left=nullptr;
//     }
// };

// Node* create(Node * root){

//     int val;
//     cout<<"Enter the data :: ";
//     cin>>val;
//     if(val==-1){
//         return nullptr;
//     }

//     root= new Node(val);
//     cout<<"Enter the data for left of "<<val<<endl;
//     root->left=create(root->left);
//     cout<<"Enter the data for the right of  "<<val<<endl;
//     root->right=create(root->right);
//     return root;
// }

// //  in postorder first left then right then root
// void postOrder(Node* root){
//     if(root==nullptr){
//         return;
//     }
//     postOrder(root->left);
//     postOrder(root->right);
//     cout<<root->data<<" ";
// }

// int main(){
//     Node* root=nullptr;
//     root=create(root);
//     postOrder(root);
// }

/*** binary search tree practice in  binary search tree  left node is smaller than root node and right node is greater than root node  */

// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val){
//         this->data=val;
//         this->left=nullptr;
//         this->right=nullptr;
//     }
// };

// //  function to insert Node in bst
// Node *insert(Node* root,int val){
//     if(root==nullptr){
//         root= new Node(val);
//         return root;
//     }

//     if(val > root->data){
//         root->right=insert(root->right,val);
//     }
//     if(val< root->data){
//         root->left=insert(root->left,val);
//     }

//     return root;

// }

// void create(Node* &root){
//     int val;
//     cout<<"Enter the data :: ";
//     cin>>val;
//     while(val!=-1){
//         root=insert(root,val);
//         cin>>val;
//     }

// }

// //in order traversal of bst gives ascending order

// void inorder(Node* root){
//     if(root==nullptr){
//         return ;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

// int main(){
//     Node* root= nullptr;
//     create(root);
//     inorder(root);
// }

// /*** bst preorder */

// #include<bits/stdc++.h>
// using namespace std;
//  class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         this->data=val;
//         this->left=nullptr;
//         this->right=nullptr;
//     }
//  };

//  Node* insert(Node* root,int val){
//     if(root==nullptr){
//         root=new Node(val);
//         return root;
//     }

//     if(val > root->data){
//         root->right=insert(root->right,val);
//     }
//     if(val< root->data){
//         root->left=insert(root->left,val);
//     }
//     return root;
//  }

//  void create(Node* &root){
//     int val;
//     cout<<"Enter the data :: ";
//     cin>>val;
//     while(val!=-1){
//         root=insert(root,val);
//         cin>>val;
//     }
//  }

//  void preorder(Node *root){
//     if(root==nullptr){
//         return;
//     }
//     cout<<root->data<<" ";
//     preorder(root->left);
//     preorder(root->right);
//  }

//  int main(){
//     Node* root= nullptr;
//     create(root);
//     preorder(root);

//  }

/**** level order traveeral  bst */

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int val)
//     {
//         this->data = val;
//         this->left = nullptr;
//         this->right = nullptr;
//     }
// };

// Node* insert(Node* root,int val){
//     if(root==nullptr){
//         root= new Node(val);
//         return root;
//     }
//     if(val >root->data){
//         root->right=insert(root->right,val);
//     }
//     if(val < root->data){
//         root->left=insert(root->left,val);
//     }
//     return root;
// }

// void create(Node* &root){
//     int val;
//     cout<<"Enter the data ";
//     cin>>val;
//     while(val!=-1){
//         root=insert(root,val);
//         cin>>val;
//     }

// }

// /*** level order traversing */

// void level(Node* root){
//     queue<Node*>q;
//     q.push(root);
//     q.push(nullptr);

//     while(!q.empty()){
//         Node* temp=q.front();
//         q.pop();
//         if(temp==nullptr){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(nullptr);
//             }
//         }
//         else{
//             cout<<temp->data;
//             if(temp->left){
//                 q.push(temp->left);
//             }
//             if(temp->right){
//                 q.push(temp->right);
//             }
//         }
//     }
// }

// int main(){
//     Node* root=nullptr;
//     create(root);
//     level(root);
// }

// /**** level order traversal in binary search tree */
// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         this->data=val;
//         this->left=nullptr;
//         this->right=nullptr;
//     }
// };

// Node* insert(Node * root,int val){
//     if(root==nullptr){
//         root=new Node(val);
//         return root;
//     }

//     if(val > root->data){
//         root->right=insert(root->right,val);
//     }
//     if(val < root->data){
//         root->left=insert(root->left,val);
//     }
//     return root;
// }

// void create(Node* &root){
//     int val;
//     cout<<"Enter the data :: ";
//     cin>>val;
//     while(val!=-1){
//         root=insert(root,val);
//         cin>>val;
//     }
// }

// void level(Node* root){

//     queue<Node*>q;
//     q.push(root);
//     q.push(nullptr);

//     while(!q.empty()){
//         Node* temp=q.front();
//         q.pop();
//         if(temp==nullptr){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(nullptr);
//             }
//         }
//         else{
//             cout<<temp->data<<" ";
//             if(temp->left){
//                 q.push(temp->left);
//             }
//             if(temp->right){
//                 q.push(temp->right);
//             }
//         }
//     }
// }

// int main(){
//     Node* root=nullptr;

//     create(root);
//     level(root);
// }

/*** merge sort */

// #include<bits/stdc++.h>
// using namespace std;
// void merge(int *arr,int s,int e){
//     int mid= (s+e)/2;
//     int len1= mid -s +1;
//     int len2= e- mid;
//     int *first= new int[len1];
//     int *second=new int[len2];

//     int k=s;
//     for(int i=0;i<len1;i++){
//         first[i]=arr[k++];
//     }

//     k=mid+1;
//     for(int i=0;i<len2;i++){
//         second[i]=arr[k++];
//     }

//     int index1=0;
//     int index2=0;
//     k=s;
//     while(index1 < len1 && index2 <len2 ){
//         if(first[index1]<second[index2]){

//         arr[k++]=first[index1++];
//         }
//         else{
//             arr[k++]=second[index2++];
//         }

//     }
//     while(index1 <len1){
//         arr[k++]=first[index1++];
//     }
//     while(index2 <len2){
//         arr[k++]=second[index2++];
//     }
//      delete []first;
//      delete []second;

// }

// void sort(int *arr,int s,int e){
//     if(s>=e){
//         return;
//     }
//     int mid=(s+e)/2;
//     sort(arr,s,mid);
//     sort(arr,mid+1,e);

//     merge(arr,s,e);
// }

// int main()
// {

//     int arr[5] = {2, 5, 1, 6, 9};
//     int n = 5;
//     sort(arr, 0, n - 1);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";

//     }

// }

// /*** merge sort */

// #include<bits/stdc++.h>
// using namespace std;

// void merge(int *arr,int s,int e){
//     int mid=(s+e)/2;
//     int len1= mid -s +1;
//     int len2= e-mid;

//     int *first= new int[len1];
//     int *second= new int[len2];

//     int k=s;
//     for(int i=0;i<len1;i++){
//         first[i]=arr[k++];
//     }
//     k= mid+1;
//     for(int i=0;i<len2;i++){
//         second[i]=arr[k++];
//     }

//     int index1=0;
//     int index2=0;
//     k=s;
//     while(index1 < len1 && index2 <len2){
//         if(first[index1]< second[index2]){
//             arr[k++]=first[index1++];
//         }
//         else{
//             arr[k++]=second[index2++];
//         }
//     }

//     while(index1 < len1){
//         arr[k++]=first[index1++];
//     }
//     while(index2 <len2){
//         arr[k++]=second[index2++];
//     }

//     delete []first;
//     delete []second;
// }

// void sort(int *arr,int s,int e){
//     if(s>=e){
//         return;
//     }
//     int mid=(s+e)/2;
//     sort(arr,s,mid);
//     sort(arr,mid+1,e);
//     merge(arr,s,e);
// }

// int main()
// {

//     int arr[5] = {2, 5, 1, 6, 9};
//     int n = 5;
//     sort(arr, 0, n - 1);

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";

//     }

// }

// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         this->data=val;
//         this->left=nullptr;
//         this->right=nullptr;
//     }
// };

// Node* insert(Node* root,int val){
//     if(root==nullptr){
//         root= new Node(val);
//         return root;
//     }

//     if(val > root->data){
//         root->right=insert(root->right,val);

//     }
//     if(val < root->data){
//         root->left= insert(root->left,val);
//     }
//     return root;
// }

// void bst(Node* &root){
//     int val;
//     cin>>val;
//     while(val!=-1){
//         root= insert(root,val);
//         cin>>val;
//     }
// }

// void postorder(Node* root){
//     if(root==nullptr){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }

// int main(){
//     Node* root=nullptr;
//     bst(root);
//     postorder(root);
// }

//  /*** simple binary tree */

// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         this->data=val;
//         this->left=nullptr;
//         this->right=nullptr;
//     }
// };

// Node* insert(Node *root){
//     int val;
//     cout<<"Enter the data ";
//     cin>>val;
//     root=new Node(val);
//     if(val==-1){
//         return nullptr;
//     }

//     cout<<"Enter the data for the left of "<<val<<endl;
//     root->left=insert(root->left);
//     cout<<"Enter the data for the right of "<<val<<endl;
//     root->right=insert(root->right);

//     return root;
// }

// void postorder(Node* root){
//     if(root==nullptr){
//         return ;
//     }

//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }

// int main(){
//     Node* root=nullptr;
//     root=insert(root);
//     postorder(root);
// }

/*** level order traversal in binary  search tree */

// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         this->data=val;
//         this->left=nullptr;
//         this->right=nullptr;
//     }
// };

// Node* insert(Node* root,int val){
//     if(root==nullptr){
//         root= new Node(val);
//         return root;
//     }

//     if(val > root->data){
//         root->right=insert(root->right,val);

//     }
//     if(val < root->data){
//         root->left=insert(root->left,val);
//     }
//     return root;
// }

// void bst(Node* &root){
//     int val;
//     cin>>val;
//     while(val!=-1){
//         root=insert(root,val);
//         cin>>val;
//     }
// }

// void level(Node* root){
//     queue<Node*>q;
//     q.push(root);
//     q.push(nullptr);

//     while(!q.empty()){
//         Node* temp=q.front();
//         q.pop();
//         if(temp==nullptr){
//          cout<<endl;
//          if(!q.empty()){
//             q.push(nullptr);
//          }
//         }
//         else{
//             cout<<temp->data<<" ";
//             if(temp->left){
//                 q.push(temp->left);
//             }
//             if(temp->right){
//                 q.push(temp->right);
//             }
//         }
//     }
// }

// int main(){
//     Node * root=nullptr;
//     bst(root);
//     level(root);
// }

//******** Merge sort */

// #include<bits/stdc++.h>
// using namespace std;

// void merge(int *arr,int s ,int e){
//     int mid=(s+e)/2;
//     int len1=mid - s +1;
//     int len2=e-mid;

//     int *first= new int[len1];
//     int *second= new int[len2];

//     int k=s;
//     for(int i=0;i<len1;i++){
//         first[i]=arr[k++];
//     }

//     k=mid+1;
//     for(int i=0;i<len2;i++){
//         second[i]=arr[k++];
//     }
// merge
//     int index1=0;
//     int index2=0;

//     k=s;
//     while(index1 <len1 && index2 <len2){
//         if(first[index1] < second[index2]){
//             arr[k++]=first[index1++];
//         }
//         else{
//             arr[k++]=second[index2++];
//         }
//     }

//     while(index1 <len1){
//         arr[k++]=first[index1++];
//     }
//     while(index2 < len2){
//         arr[k++]=second[index2++];
//     }
// }

// void sort(int *arr,int s,int e){
//     if(s>=e){
//         return;
//     }
//     int mid=(s+e)/2;
//     sort(arr,s,mid);
//     sort(arr,mid+1,e);

//     merge(arr,s,e);
// }

// int main(){
//     int n;
//     cout<<"Enter the lenght of array:: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter random values in array for merge sort check ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     sort(arr,0,n-1);
//     cout<<endl;
//     cout<<"Sorted array using merge sort is:: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

/**** merge sort  */

// #include <bits/stdc++.h>
// using namespace std;

// void merge(int *arr, int s, int e)
// {
//     int mid = (s + e) / 2;
//     int len1 = mid - s + 1;
//     int len2 = e - mid;
//     int *first = new int[len1];
//     int *second = new int[len2];

//     int k = s;
//     for (int i = 0; i < len1; i++)
//     {
//         first[i] = arr[k++];
//     }
//     k = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         second[i] = arr[k++];
//     }

//     //  merge
//     k = s;
//     int index1 = 0;
//     int index2 = 0;
//     while (index1 < len1 && index2 < len2)
//     {
//         if (first[index1] < second[index2])
//         {
//             arr[k++] = first[index1++];
//         }
//         else
//         {
//             arr[k++] = second[index2++];
//         }
//     }

//     while (index1 < len1)
//     {
//         arr[k++] = first[index1++];
//     }
//     while (index2 < len2)
//     {
//         arr[k++] = second[index2++];
//     }
//     delete[] first;
//     delete[] second;
// }

// void sort(int *arr, int s, int e)
// {
//     if (s >= e)
//     {
//         return;
//     }
//     int mid = (s + e) / 2;

//     sort(arr, s, mid);
//     sort(arr, mid + 1, e);

//     merge(arr, s, e);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     sort(arr, 0, n - 1);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         this->data=val;
//         this->left=nullptr;
//         this->right=nullptr;

//     }
// };

// Node* insert(Node* root,int val){
//     if(root==nullptr){
//         return;
//     }

//     if(val > root->data){
//         root->right=insert(root->right,val);
//     }
//     if(val < root->data){
//         root->left=insert(root->left,val);
//     }
//     return root;
// }
// void bst(Node* &root){
//     int val;
//     cin>>val;
//     while(val!=-1){
//         root=insert(root,val);
//         cin>>val;
//     }
// }

// void postorder(Node* root){
//     if(root==nullptr){
//         return;
//     }
//     postorder(root->left);
//     postorder(root->right);
//     cout<<root->data<<" ";
// }

// int main(){
//     Node* root=nullptr;
//     bst(root);
//     postorder(root);

// }

/**** dynamic memory allocation  */

// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     int *p=nullptr;
//     p=new int;
//     if(p==nullptr){
//         cout<<"Failure ";
//         return 1;
//     }
//     else{
//         cout<<"Allocated ";
//         *p=12;
//         cout<<"stored value is "<<*p;
//         delete p;
//         return 1;
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;

// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int val)
//     {
//         this->data = val;
//         this->left = nullptr;
//         this->right = nullptr;
//     }
// };

// Node *insert(Node *root, int val)
// {
//     if (root == nullptr)
//     {
//         root = new Node(val);
//         return root;
//     }

//     if (val < root->data)
//     {
//         root->left = insert(root->left, val);
//     }
//     if (val > root->data)
//     {
//         root->right = insert(root->right, val);
//     }
//     return root;
// }

// void bst(Node *&root)
// {
//     int val;
//     cin >> val;
//     while (val != -1)
//     {
//         root = insert(root, val);
//         cin >> val;
//     }
// }

// //  level order traversal

// void level(Node *root)
// {
//     queue<Node *> q;
//     q.push(root);
//     q.push(nullptr);

//     while (!q.empty())
//     {
//         Node *temp = q.front();
//         q.pop();
//         if (temp == nullptr)
//         {
//             cout << endl;
//             if (!q.empty())
//             {
//                 q.push(nullptr);
//             }
//         }
//         else
//         {
//             cout << temp->data << " ";

//             if (temp->left)
//             {
//                 q.push(temp->left);
//             }
//             if (temp->right)
//             {
//                 q.push(temp->right);
//             }
//         }
//     }
// }

// int main()
// {
//     Node *root = nullptr;
//     bst(root);
//     level(root);
// }

/***   Level order traversal of binary search tree  */

// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         this->data=val;
//         this->left=nullptr;
//         this->right=nullptr;
//     }
// };

// Node* insert(Node* root,int val){
//     if(root==nullptr){
//         root= new Node(val);
//         return root;
//     }
//     if(val > root->data){
//         root->right=insert(root->right,val);
//     }
//     if(val < root->data){
//         root->left=insert(root->left,val);
//     }
//     return root;
// }

// void bst(Node* &root){
//     int val;
//     cin>>val;
//     while(val!=-1){
//         root=insert(root,val);
//         cin>>val;
//     }
// }

// // / function for the level order traversal of the tree

// void level(Node* root){
//     queue<Node*>q;
//     q.push(root);
//     q.push(nullptr);
//     while(!q.empty()){
//         Node* temp=q.front();
//         q.pop();
//         if(temp==nullptr){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(nullptr);

//             }
//         }
//             else{
//                 cout<<temp->data<<" ";
//                 if(temp->left){
//                     q.push(temp->left);
//                 }
//                 if(temp->right){
//                     q.push(temp->right);
//                 }
//             }
//     }
// }

// int main(){
//     Node* root=nullptr;
//     bst(root);
//     level(root);
// }

/********************************Merger sort */
// #include <bits/stdc++.h>
// using namespace std;

// void merge(int *arr, int s, int e)
// {
//     int mid = (s + e) / 2;
//     int len1 = mid - s + 1;
//     int len2 = e - mid;
//     int *first = new int[len1];
//     int *second = new int[len2];
//     int k = s;

//     for (int i = 0; i < len1; i++)
//     {
//         first[i] = arr[k++];
//     }
//     k = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         second[i] = arr[k++];
//     }

//     //  merge
//     k = s;
//     int index1 = 0;
//     int index2 = 0;

//     while (index1 < len1 && index2 < len2)
//     {
//         if (first[index1] < second[index2])
//         {
//             arr[k++] = first[index1++];
//         }
//         else
//         {
//             arr[k++] = second[index2++];
//         }
//     }
//     while (index1 < len1)
//     {
//         arr[k++] = first[index1++];
//     }
//     while (index2 < len2)
//     {
//         arr[k++] = second[index2++];
//     }
//     delete[] first;
//     delete[] second;
// }

// void sort(int *arr, int s, int e)
// {
//     if (s >= e)
//     {
//         return;
//     }
//     int mid = (s + e) / 2;
//     sort(arr, s, mid);
//     sort(arr, mid + 1, e);
//     merge(arr, s, e);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     sort(arr, 0, n - 1);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// #include <bits/stdc++.h>
// using namespace std;
// void merge(int *arr, int s, int e)
// {
//     int mid = (s + e) / 2;
//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     int *first = new int[len1];
//     int *second = new int[len2];
//     int k = s;
//     for (int i = 0; i < len1; i++)
//     {
//         first[i] = arr[k++];
//     }
//     k = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         second[i] = arr[k++];
//     }

//     //  merge
//     k = s;
//     int index1 = 0;
//     int index2 = 0;
//     while (index1 < len1 && index2 < len2)
//     {
//         if (first[index1] < second[index2])
//         {
//             arr[k++] = first[index1++];
//         }
//         else
//         {
//             arr[k++] = second[index2++];
//         }
//     }

//     while (index1 < len1)
//     {
//         arr[k++] = first[index1++];
//     }
//     while (index2 < len2)
//     {
//         arr[k++] < second[index2++];
//     }
// }

// void sort(int *arr, int s, int e)
// {
//     int mid = (s + e) / 2;
// if(s>=e){
//     return;
// }
//     sort(arr, s, mid);
//     sort(arr, mid + 1, e);
//     merge(arr, s, e);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     sort(arr, 0, n - 1);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

//  Merge sort

// #include <bits/stdc++.h>
// using namespace std;

// void merge(int *arr, int s, int e)
// {
//     int mid = (s + e) / 2;
//     int len1 = mid - s + 1;
//     int len2 = e - mid;

//     int *first = new int[len1];
//     int *second = new int[len2];

//     int k = s;
//     for (int i = 0; i < len1; i++)
//     {
//         first[i] = arr[k++];
//     }
//     k = mid + 1;
//     for (int i = 0; i < len2; i++)
//     {
//         second[i] = arr[k++];
//     }

//     k = s;
//     int index1 = 0;
//     int index2 = 0;

//     while (index1 < len1 && index2 < len2)
//     {
//         if (first[index1] < second[index2])
//         {
//             arr[k++] = first[index1++];
//         }
//         else
//         {
//             arr[k++] = second[index2++];
//         }
//     }
//     while (index1 < len1)
//     {
//         arr[k++] = first[index1++];
//     }
//     while (index2 < len2)
//     {
//         arr[k++] = second[index2++];
//     }

//     delete []first;
//     delete []second;
// }

// void sort(int *arr, int s, int e)
// {
//     if (s >= e)
//     {
//         return;
//     }
//     int mid = (s + e) / 2;
//     sort(arr, s, mid);
//     sort(arr, mid + 1, e);
//     merge(arr,s,e);
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     sort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// /************  BST */

// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int value){
//         this->data=value;
//         this->left=nullptr;
//         this->right=nullptr;
//     }
// };

// Node* insert(Node* root,int value){
//     if(root==nullptr){
//         root= new Node(value);
//         return root;
//     }

//     if(value >root->data){
//         root->right=insert(root->right,value);
//     }
//     if(value <root->data){
//         root->left= insert(root->left,value);
//     }
//     return root;
// }

// void bst(Node* &root){

//     int val;
//     cin>>val;
//     while(val!=-1){
//         root=insert(root,val);
//         cin>>val;
//     }
// }

// void inorder(Node* root){
//     if(root==nullptr){
//         return ;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

// int main(){
//     Node *root= nullptr;
//     bst(root);
//     inorder(root);
// }

/**** Linked list insertion and deletion at begining  */

// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;
// };
// //  function for the insertion at begining of the linkedlist
// Node* create(Node* head,int val){
//     Node* newNode= new Node();
//     newNode->data=val;
//     newNode->next=head;
//     return newNode;
// }

// //  function for the delelion at beg

// Node* delbeg(Node* head){
//     if(head==nullptr){
//         return nullptr;
//     }
//     Node* temp=head;
//     head=head->next;
//     delete temp;
//     return head;

// }

// void print(Node * head){
//     if(head==nullptr){
//         return;
//     }
//     Node* curr= head;
//     while(curr!=nullptr){
//         cout<<curr->data<<" ";
//         curr=curr->next;
//     }
// }

// int main(){
//     Node* head= nullptr;
//     int n,val;
//     cout<<"Enter the number if values you need in linked list :: ";
//     cin>>n;
//     cout<<"Enter the values to be strored ing the lineked list insertion at begining :: ";
//     for(int i=0;i<n;i++){
//         cin>>val;
//         head=create(head,val);
//     }
// head=delbeg(head);
//     cout<<"Printing the linked list :: ";
//     print(head);
// }

/*****linked list insertion and deletion at end */

// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;
// };

// Node* create(Node* head,int val){
//     Node* newNode=new Node();
//     newNode->data=val;
//     newNode->next=nullptr;
//     if(head==nullptr){
//         return newNode;
//     }

//     Node* temp=head;
//     while(temp->next!=nullptr){
//         temp=temp->next;
//     }

//     temp->next=newNode;
//     return head;
// }
// //    function to delete the last node of an linked list ::
// Node* del(Node* head){
//     if(head==nullptr){
//         return nullptr;
//     }

//     if(head->next==nullptr){
//         delete head;
//         head=nullptr;
//         return nullptr;
//     }

//     Node* temp=head;
//     while(temp->next->next!=nullptr){
//         temp=temp->next;
//     }

//     delete temp->next;
//     temp->next=nullptr;
//     return head;
// }

// void print(Node* head){
//     if(head==nullptr){
//         return ;
//     }
//     Node* curr= head;
//     while(curr!=nullptr){
//         cout<<curr->data<<" ";
//         curr=curr->next;
//     }

// }

// int main(){
//     Node* head=nullptr;
//     int n,val;
//     cout<<"Enter the numbr of values to be entered in the linked list :: ";
//     cin>>n;
//     cout<<"Enter the values to be entered int the end of the linked list :: ";
//     for(int i=0;i<n;i++){
//         cin>>val;
//         head=create(head,val);
//     }
// del(head);
//     cout<<"Printing the linked list after operation :: ";
//     print(head);
// }

/*****  Simple bst  */

// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         this->data=val;
//         this->left=nullptr;
//         this->right=nullptr;
//     }
// };

// Node* insert(Node* root){
//     int val;
//     cin>>val;
//     root= new Node(val);
//     if(val==-1){
//         return nullptr;
//     }
// cout<<"enter the data for the left of "<<val;
//     root->left=insert(root->left);
// cout<<"enter the data for the right of "<<val;
//     root->right=insert(root->right);
// return root;
// }

// void print(Node* root){
//     if(root==nullptr){
//         return;
//     }
//     print(root->left);
//     cout<<root->data<<" ";
//     print(root->right);
// }

// int main(){
//     Node* root=nullptr;
//     root=insert(root);
//     print(root);
// }

/*********************Binary search tree  */

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;

//     Node(int val)
//     {
//         this->data = val;
//         this->left = nullptr;
//         this->right = nullptr;
//     }
// };

// Node *insert(Node *root, int val)
// {
//     if (root == nullptr)
//     {
//         root = new Node(val);
//         return root;
//     }
//     if (val > root->data)
//     {
//         root->right = insert(root->right, val);
//     }
//     else
//     {
//         root->left = insert(root->left, val);
//     }

//     return root;
// }

// void bst(Node *&root)
// {
//     int val;
//     cin >> val;
//     while (val != -1)
//     {
//         root = insert(root, val);
//         cin >> val;
//     }
// }

// void inorder(Node *root)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     inorder(root->left);
//     cout << root->data << " ";
//     inorder(root->right);
// }

// Node* min(Node* root){
//     Node* curr=root;
//     while(curr->left!=nullptr){
//         curr=curr->left;
//     }
//     return curr;
// }

// Node* meax(Node* root){
//     Node* temp=root;
//     while(temp->right!=nullptr){
//         temp=temp->right;
//     }
//     return temp;
// }

// int main()
// {
//     Node *root = nullptr;
//     bst(root);
//     inorder(root);
//     cout<<endl<<meax(root)->data;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     priority_queue<int,vector<int>,greater<int>>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//    q.push(1);
//    cout<<q.top();
// }

//

// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int *arr= new int[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int pos=0;
//     int neg=0;
//     int zer=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>0){
//             pos++;
//         }
//         else if(arr[i]==0){
//             zer++;
//         }
//         else{
//             neg++;
//         }
//     }

//     cout<<"Positive number in array :: "<<pos<<endl;
//     cout<<"Negtive number in array :: "<<neg<<endl;
//     cout<<"Zeros in array :: "<<zer<<endl;
//     delete []arr;

// }

// #include <iostream>
// #include <vector>

// using namespace std;

// class MinHeap {
// private:
//     vector<int> heap;

//     void heapify(int index) {
//         int smallest = index;
//         int leftChild = 2 * index + 1;  // Index of left child
//         int rightChild = 2 * index + 2; // Index of right child

//         if (leftChild < heap.size() && heap[leftChild] < heap[smallest]) {
//             smallest = leftChild;
//         }

//         if (rightChild < heap.size() && heap[rightChild] < heap[smallest]) {
//             smallest = rightChild;
//         }

//         if (smallest != index) {
//             swap(heap[index], heap[smallest]);
//             heapify(smallest); // Recursively heapify the affected subtree
//         }
//     }

// public:
//     void insert(int value) {
//         heap.push_back(value);
//         int currentIndex = heap.size() - 1;
//         while (currentIndex != 0 && heap[parent(currentIndex)] > heap[currentIndex]) {
//             swap(heap[currentIndex], heap[parent(currentIndex)]);
//             currentIndex = parent(currentIndex);
//         }
//     }

//     int extractMin() {
//         if (heap.empty()) {
//             cout << "Heap is empty!" << endl;
//             return -1; // Or throw an exception
//         }

//         int minVal = heap[0];  // Minimum value is at the root
//         heap[0] = heap.back();
//         heap.pop_back();
//         heapify(0);
//         return minVal;
//     }

//     int parent(int index) {
//         return (index - 1) / 2;
//     }

//     void printHeap() {
//         for (int val : heap) {
//             cout << val << " ";
//         }
//         cout << endl;
//     }
// };

// int main() {
//     MinHeap minHeap;
//     minHeap.insert(3);
//     minHeap.insert(2);
//     minHeap.insert(15);
//     minHeap.insert(5);
//     minHeap.insert(4);
//     minHeap.printHeap(); // Output: 2 3 5 4 15

//     cout << "Extracted minimum: " << minHeap.extractMin() << endl;
//     minHeap.printHeap(); // Output: 3 4 5 15
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// const int MAX_VERTICES = 20;
// int adjlist[MAX_VERTICES][MAX_VERTICES];
// int size[MAX_VERTICES];
// bool visited[MAX_VERTICES];

// void bfs(int start, int vertices)
// {
//     queue<int> q;
//     q.push(start);
//     visited[start] = true;

//     while (!q.empty())
//     {
//         int node = q.front();
//         q.pop();
//         cout << node << " ";
//         for (int i = 0; i < size[node]; i++)
//         {
//             int neighbor = adjlist[node][i];
//             if (!visited[neighbor])
//             {
//                 visited[neighbor] = true;
//                 q.push(neighbor);
//             }
//         }
//     }
// }

// int main()
// {
//     int vertices, edges;
//     cout << "Enter the number of vertices and edges: ";
//     cin >> vertices >> edges;

//     for (int i = 0; i < vertices; i++)
//     {
//         size[i] = 0;
//         visited[i] = false;
//     }

//     cout << "Enter the edges (u v): " << endl;
//     for (int i = 0; i < edges; i++)
//     {
//         int u, v;
//         cin >> u >> v;
//         adjlist[u][size[u]++] = v;
//         adjlist[v][size[v]++] = u;

//     int startingnode;
//     cout << "Enter starting node: ";
//     cin >> startingnode;

//     cout << "Traversal is: ";
//     bfs(startingnode, vertices);
//     return 0;
// }

/**** Code for BFS  */

// #include <bits/stdc++.h>
// using namespace std;

// const int MAX_VERTICES = 20;
// int adjlist[MAX_VERTICES][MAX_VERTICES];
// int size[MAX_VERTICES];
// bool visited[MAX_VERTICES];

// void bfs(int start, int vertices)
// {
//     queue<int> q;
//     q.push(start);
//     visited[start] = true;

//     while (!q.empty())
//     {
//         int node = q.front();
//         q.pop();
//         cout << node << " ";
//         for (int i = 0; i < size[node]; i++)
//         {
//             int neighbor = adjlist[node][i];
//             if (!visited[neighbor])
//             {
//                 visited[neighbor] = true;
//                 q.push(neighbor);
//             }
//         }
//     }
// }

// int main()
// {
//     int vertices, edges;
//     cout << "Enter the number of vertices and edges: ";
//     cin >> vertices >> edges;

//     // Validate input
//     if (vertices > MAX_VERTICES || vertices <= 0) {
//         cout << "Number of vertices must be between 1 and " << MAX_VERTICES << endl;
//         return 1;
//     }

//     for (int i = 0; i < vertices; i++)
//     {
//         size[i] = 0;
//         visited[i] = false;
//     }

//     cout << "Enter the edges (u v): " << endl;
//     for (int i = 0; i < edges; i++)
//     {
//         int u, v;
//         cin >> u >> v;

//         // Validate edge input
//         if (u >= vertices || v >= vertices || u < 0 || v < 0) {
//             cout << "Invalid edge (" << u << ", " << v << "). Vertices must be between 0 and " << vertices-1 << endl;
//             return 1;
//         }

//         adjlist[u][size[u]++] = v;
//         adjlist[v][size[v]++] = u;
//     }

//     int startingnode;
//     cout << "Enter starting node: ";
//     cin >> startingnode;

//     // Validate starting node input
//     if (startingnode >= vertices || startingnode < 0) {
//         cout << "Invalid starting node. Must be between 0 and " << vertices-1 << endl;
//         return 1;
//     }

//     cout << "Traversal is: ";
//     bfs(startingnode, vertices);
//     return 0;
// }

/********Code for DFS */

// #include <bits/stdc++.h>
// using namespace std;

// #define MAX 20

// int visited[MAX];

// void addedge(int adj[MAX][MAX], int u, int w) {
//     adj[u][w] = 1;
//     adj[w][u] = 1;
// }

// void dfs(int adj[MAX][MAX], int V, int v) {
//     visited[v] = 1;
//     cout << v << " ";
//     for (int i = 0; i < V; i++) {
//         if (adj[v][i] && !visited[i]) {
//             dfs(adj, V, i);
//         }
//     }
// }

// int main() {
//     int v, e;
//     cin >> v >> e;
//     int adj[MAX][MAX] = {0};

//     for (int i = 0; i < e; i++) {
//         int u, w;
//         cin >> u >> w;
//         cin >> u >> w;
//         cin >> u >> w;
//         addedge(adj, u, w);
//     }

//     int startnode;
//     cin >> startnode;

//     memset(visited, 0, sizeof(visited));

//     cout << "DFS is: ";
//     dfs(adj, v, startnode);
//     cout << endl;

//     return 0;
// }

// **************** Linked list Insertion At begining ************

// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;

// };

// Node* create(Node* head,int val){
//     Node * newNode= new Node();
//     newNode->data=val;
//     newNode->next=head;
//     return newNode;
// }

// void print(Node* head){
//     if(head==nullptr){
//         return ;
//     }
//     Node* curr= head;
//     while(curr!=nullptr){
//         cout<<curr->data<<" ";
//         curr=curr->next;
//     }

// }

// int main(){
//     Node* head=nullptr;
//     int n;
//     cout<<"Enter the  number of elements you want to add in the linked list in begining : ";
//     cin>>n;
//     int val;
//     for(int i=0;i<n;i++){
//         cin>>val;
//         head=create(head,val);
//     }

//     cout<<"Printing the linked list :: ";
//     print(head);
// }

/*******************************************Linked list Insertion at End */

// #include<bits/stdc++.h>
// using namespace std;
// struct Node{
//     int data;
//     Node* next;
// };

// Node* atend(Node * head, int val){
//     Node* newNode= new Node();
//     newNode->data=val;
//     newNode->next=nullptr;
//     if(head==nullptr){
//         return newNode;
//     }

//     Node* temp=head;
//     while(temp->next!=nullptr){
//         temp=temp->next;

//     }
//     temp->next=newNode;
//     return head;
// }

// void print(Node* head){
//     if(head==nullptr){
//         return;
//     }
//     Node* curr=head;
//     while(curr!=nullptr){
//         cout<<curr->data<<" ";
//         curr=curr->next;
//     }
// }

// int main(){

//     Node* head= nullptr;
//     int n,val;
//     cout<<"Enter the numbe of nodes you want to insert into the end of the linked list :: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>val;
//         head=atend(head,val);
//     }

//     print(head);
// }

/**********validate email */

// #include <iostream>
// #include <string>
// #include <stdexcept>
// using namespace std;

// // Custom exception class for Invalid Email
// class InvalidEmailException : public runtime_error {
// public:
//     InvalidEmailException() : runtime_error("Invalid Email Id!!!") {}
// };

// // Function to validate the email
// void validateEmail(const string &email) {
//     // Check if the email starts with a letter
//     if (!isalpha(email[0])) {
//         throw InvalidEmailException();
//     }

//     size_t at_pos = email.find('@');
//     size_t dot_pos = email.find('.', at_pos); // Find the first '.' after '@'

//     // Check if both '@' and '.' exist and '@' comes before '.'
//     if (at_pos == string::npos || dot_pos == string::npos || at_pos > dot_pos) {
//         throw InvalidEmailException();
//     }

//     // Check if there's at least one character before '@' and one between '@' and '.'
//     if (at_pos == 0 || dot_pos == at_pos + 1 || dot_pos == email.size() - 1) {
//         throw InvalidEmailException();
//     }

//     // If all checks pass, the email is valid
//     cout << "Email Id is Valid" << endl;
// }

// int main() {
//     string email;
//     cin >> email;  // Read the input email

//     try {
//         validateEmail(email);  // Attempt to validate the email
//     } catch (const InvalidEmailException &e) {
//         // Catch and handle the exception if thrown
//         cout << "Exception Caught..." << endl;
//         cout << e.what() << endl;  // Output the custom error message
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

//  class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         this->data=val;
//         this->left=nullptr;
//         this->right=nullptr;
//     }
//  };

//  Node* insert(Node* root,int val){
//     if(root==nullptr){
//         root= new Node(val);
//         return root;
//     }
//       if(root->data < val){
//         root->right=insert(root->right,val);
//       }
//       if(root->data >val){
//         root->left=insert(root->left,val);
//       }
//       return root;

//  }

//  void create(Node* &root){
//     int val;
//     cin>>val;
//     while(val!=-1){
//         root=insert(root,val);
//         cin>>val;
//     }
//  }

//  void inorder(Node* root){
//     if(root==nullptr){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
//  }

//  int main(){
//     Node* root=nullptr;
//     create(root);
//     inorder(root);
//  }

// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* left;
//     Node* right;
//     Node(int val){
//         this->data=val;
//         this->left=nullptr;
//         this->right=nullptr;
//     }
// };

// Node* create(Node* root){
//     int val;
//     cin>>val;
//     root= new Node(val);

//     if(val==-1){
//         return nullptr;
//     }

//     root->left=create(root->left);
//     root->right=create(root->right);
//     return root;
// }

// void inorder(Node* root){
//     if(root==nullptr){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }

// int main(){
//     Node* root= nullptr;
//    root= create(root);
//     inorder(root);

// }


/***** BST with inorder traversal */

// #include <bits/stdc++.h>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *left;
//     Node *right;
//     Node(int val)
//     {
//         this->data = val;
//         this->left = nullptr;
//         this->right = nullptr;
//     }
// };

// Node *insert(Node *root, int val)
// {
//     if (root == nullptr)
//     {
//         root = new Node(val);
//         return root;
//     }

//     if (val > root->data)
//     {
//         root->right = insert(root->right, val);
//     }
//     if (val < root->data)
//     {
//         root->left = insert(root->left, val);
//     }
//     return root;
// }

// void bst(Node* &root){
//     int val;
//     cin>>val;
//     while(val!=-1){
//         root= insert(root,val);
//         cin>>val;
//     }

// }

// void inorder(Node* root){
//     if(root==nullptr){
//         return;
//     }
//     inorder(root->left);
//     cout<<root->data<<" ";
//     inorder(root->right);
// }


// int main()
// {
// Node* root= nullptr;
// bst(root);
// inorder(root);
// }



// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     int se;
//     cout<<"Enter the number to find in the array :: ";
//     cin>>se;

//     int high=n-1;
//     int low=0;
   
//     while(low<=high){
//         int mid= low + (high-low)/2;
//         if(arr[mid]==se){
//             cout<<"found"<<endl;
           
//             return 0;
//         }
//       else  if(arr[mid]< se){
//             low=mid+1;
//         }
//       else  if(arr[mid]> se){
//             high=mid-1;
//         }
//     }
// cout<<"Not found";
// }

//  bubble sort

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-1;j++){
//             if(arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }
//     }

// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }

//     }



//  selection sort 

/** selection sort in this we assume the that very first element is least one and we will compare to every element if we found  any element less than assumed min then we swap that element with min one if not found then assume the second elemnt as  min  */

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         int min=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[min]> arr[j]){
//                 min=j;
//             }
//         }
//         if(i!=min){
//             int temp=arr[i];
//             arr[i]=arr[min];
//             arr[min]=temp;
//         }
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         int min=i;
//         for(int j=i+1;j<n;j++){
//             if(arr[min]>arr[j]){
//                 min=j;
//             }
//         }
//         if(min!=i){
//             int temp=arr[i];
//             arr[i]=arr[min];
//             arr[min]=temp;
//         }
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



/***Insertion sort   */


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     // here we are going to assume that very first element is already in sorted order 
//     for(int i=0;i<n;i++){
//         int key=arr[i];
//         int j=i-1;
//         while(j>=0 && arr[j]>key){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;

//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     for(int i=0;i<n;i++){
//         int key=arr[i];
//         int j=i-1;
//         while(j>=0 && arr[j]> key){
//             arr[j+1]=arr[j];
//             j--;
//         }
//         arr[j+1]=key;
//     }

//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



// #include<bits/stdc++.h>
// using namespace std;

// struct Node{
//     int data;
//     Node* next;

// };

// Node* insert(Node* head,int val){
//     Node* newNode=new Node();
//     newNode->data=val;
//     newNode->next=nullptr;
//     if(head==nullptr){
//         return newNode;
// }
// Node* temp= head;
// while(temp->next!=nullptr){
//     temp=temp->next;
// }
// temp->next=newNode;
// return head;
// }

// void print(Node* head){
//     if(head==nullptr){
//         cout<<"Linked list is empty";
//         return ;
//     }
//     Node * temp= head;
//     while(temp!=nullptr){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }


// Node* beg(Node* head,int val){
//     Node* newNode=new Node();
//     newNode->data=val;
//     newNode->next=head;
//     return newNode;
// }


// Node* kth(Node* head,int val,int pos,int &sz){
//     if(pos < 0 || pos > sz+1){
//         cout<<"Invalid position ";
//         return head;
//     }
//     if(pos==1){
//         return beg(head,val);
//     }
//     Node* temp=head;
//     for(int i=1; i< pos - 1;i++){
//         temp=temp->next;
//     }
    
// }



// int main(){
//     Node* head= nullptr;
//     int n,val;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>val;
//         head=insert(head,val);
//     }
//     print(head);
// }


// #include <iostream>
// using namespace std;

// // Define the structure for a Node in the binary tree
// struct Node {
//     int data;       // Data stored in the node
//     Node* left;     // Pointer to the left child node
//     Node* right;    // Pointer to the right child node
// };

// // Function to create a new node
// Node* createNode(int value) {
//     Node* newNode = new Node;       // Dynamically allocate memory for a new node
//     newNode->data = value;          // Set the data value of the node
//     newNode->left = newNode->right = nullptr; // Initialize left and right children as nullptr
//     return newNode;                 // Return the pointer to the new node
// }

// // Function to insert a node into the binary tree
// Node* insertNode(Node* root, int value) {
//     if (root == nullptr) {
//         return createNode(value);   // If tree is empty, create and return new node as root
//     }
//     if (value < root->data) {
//         root->left = insertNode(root->left, value); // Insert in left subtree
//     } else {
//         root->right = insertNode(root->right, value); // Insert in right subtree
//     }
//     return root;
// }

// // Function to perform in-order traversal of the binary tree
// void inOrderTraversal(Node* root) {
//     if (root == nullptr) return;    // Base case: if node is null, return
//     inOrderTraversal(root->left);   // Visit left subtree
//     cout << root->data << " ";      // Print data of the node
//     inOrderTraversal(root->right);  // Visit right subtree
// }

// int main() {
//     Node* root = nullptr; // Initialize root as nullptr
//     int n, value;

//     cout << "Enter the number of nodes: ";
//     cin >> n;

//     cout << "Enter the values of nodes:\n";
//     for (int i = 0; i < n; ++i) {
//         cin >> value;
//         root = insertNode(root, value); // Insert each node into the binary tree
//     }

//     cout << "\nIn-order traversal of the binary tree: ";
//     inOrderTraversal(root); // Display the tree
//     cout << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// // Define the structure for a node
// struct Node {
//     int data;
//     Node* next;
// };

// // Function to create a new node
// Node* createNode(int value) {
//     Node* newNode = new Node;  // Dynamically allocate memory
//     newNode->data = value;
//     newNode->next = nullptr;
//     return newNode;
// }

// // Function to display the linked list
// void displayList(Node* head) {
//     Node* temp = head;
//     while (temp != nullptr) {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// // Function to insert a new node at the front
// Node* insertAtFront(Node* head, int value) {
//     Node* newNode = createNode(value);
//     newNode->next = head;
//     head = newNode;  // Update head to the new node
//     return head;
// }

// int main() {
//     int n, value;
//     Node *head = nullptr, *temp = nullptr;

//     // Number of nodes
//     cout << "Enter the number of nodes: ";
//     cin >> n;

//     // Creating the linked list
//     for (int i = 0; i < n; i++) {
//         cout << "Enter value for node " << i + 1 << ": ";
//         cin >> value;

//         Node* newNode = createNode(value);

//         if (head == nullptr) {
//             head = newNode;  // Assign the first node to head
//         } else {
//             temp->next = newNode;  // Link the previous node to the new node
//         }
//         temp = newNode;  // Move temp to the newly created node
//     }

//     // Display the linked list
//     cout << "Linked list: ";
//     displayList(head);

//     // Insert a new node at the front
//     cout << "Enter a value to insert at the front: ";
//     cin >> value;
//     head = insertAtFront(head, value);

//     // Display the updated linked list
//     cout << "Updated linked list: ";
//     displayList(head);

//     return 0;
// }



// head =100;



#include<iostream>
using namespace std;
int main(){
    int target;
    cin>>target;
    int n;
    cin>>n;
    bool f=false;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            f=true;
            cout<<"found at"<<i<<endl;
            return 0;
        }
           
        
    }
    if(!f){
     cout<<target<<"is not found"<<endl;
    }
}