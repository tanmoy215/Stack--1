#include<bits/stdc++.h>
using namespace std;
class Stack{
  public:
  vector<int> arr;
   Stack(){
    
   }
   void push(int val){
       arr.push_back(val);
   }
   void pop(){
    if(arr.size()==0){
        cout<<"Stack is empty";
        return;
        }
        arr.pop_back();
   }
   int top(){
    if(arr.size()==0){
        cout<<"Stack is empty";
        return -1;
        }
   return arr[arr.size()-1];

   }
   int size(){
     return arr.size();
   }
   void display(){
    for(int i=0;i<arr.size();i++){
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
     cout<<st.size();
     st.push(90);
     st.push(29);
     st.push(89);
     cout<<endl;
     st.display();
    return 0;
}