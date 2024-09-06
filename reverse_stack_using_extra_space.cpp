#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    stack<int> temp;
    //push in temp
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    //push in rt
    stack<int> rt;
    while(temp.size()>0){
        rt.push(temp.top());
        temp.pop();
    }
    //finally rever oder push in original stack
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    //print the stack
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}