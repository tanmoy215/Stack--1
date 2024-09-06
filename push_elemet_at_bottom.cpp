#include<bits/stdc++.h>
using namespace std;
void printstack(stack<int> stt){
    stack<int> temp;
    while(stt.size()>0){
        temp.push(stt.top());
        stt.pop();
    }
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    printstack(st);
    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    int val;
    cout<<"enter element that we need to push : ";
    cin>>val;
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
     printstack(st);
    return 0;
}