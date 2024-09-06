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
    vector<int> ans;
    //push the value in to vector
    while(st.size()>0){
      ans.push_back(st.top());
      st.pop();
    }
    //push the value vector to stack
    int i=0;
    while(ans.size()>i){
        st.push(ans[i++]);
    }
     printstack(st);
    return 0;
}