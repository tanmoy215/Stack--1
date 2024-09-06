#include<bits/stdc++.h>
using namespace std;
#define n 5
class Stack{
  public:
   int arr[n];
   int size;
   Stack(){
    size = -1;
   }
   void push(int val){
        if(size==n-1){
            cout<<"Stack is full"<<endl;
            return;
        }
        size++;
        arr[size]=val;
   }
   void pop(){
    if(size==-1){
        cout<<"Stack is Empty"<<endl;
        return;
      }
      size--;
   }
   int top(){
    if(size==-1){
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    return arr[size];
   }
   int sizee(){
    return size+1;
   }
   void display(){
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
   }
};
int main(){
     Stack st;
     st.push(10);
     cout<<st.top()<<endl;
     st.pop();
     cout<<st.sizee();
     st.push(20);
     st.push(90);
     st.push(29);
     st.display();
    return 0;
}