#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next=NULL;
    }
};
class Stack{
   public:
   Node* head;
   int size;
   Stack(){
    size=0;
    head =NULL;
   }
   void push(int data){
    Node* temp = new Node(data);
    temp->next = head;
    head= temp;
    size++;
   }
   void pop(){
    if(size==0){
        cout<<"Stack is Empty"<<endl;
        return;
    }
    head = head->next;
    size--;
   }
   int top(){
    if(size==0){
        cout<<"Stack is Empty"<<endl;
        return -1;
        }
     return head->val;
   }
   void printtemp(Node* head){
     Node* temp = head;
     if(temp==NULL) return;
     printtemp(temp->next);
      cout<<temp->val<<" ";
   }
   void display(){
    Node* temp = head;
    printtemp(temp);
   }
};
int main(){
    Stack st;
    st.push(10);
    st.push(29);
     st.push(20);
     st.display();
    return 0;
}