#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    // cout<<st.size()<<endl;
    // st.push(30);
    // st.push(78);
    // st.push(67);
    // st.push(2567);
    // cout<<st.size()<<endl;
    // st.pop();
    // cout<<st.size()<<endl;
    // cout<<st.top()<<endl;
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    int n;
    cout<<"enter number of element : ";
    cin>>n;
    for(int i=0;i<n;i++){
      int val;
      cin>>val;
      st.push(val);
    }
    //output
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}