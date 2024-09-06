#include<bits/stdc++.h>
using namespace std;
void printrecursively(stack<int>& st){
    if(st.size()==0) return;
     int x = st.top();
     st.pop();
     printrecursively(st);
     cout<<x<<" ";
     st.push(x);
}
void pushbottom(stack<int>& st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushbottom(st,val);
    st.push(x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60); 
    printrecursively(st);
    pushbottom(st,-10);
    cout<<endl;
     printrecursively(st);
}