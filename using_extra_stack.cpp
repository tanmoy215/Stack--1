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
        while(st.size()>0){
            temp.push(st.top());
            st.pop();
        }
        //output
        while(temp.size()>0){
            cout<<temp.top()<<" ";
            st.push(temp.top());
            temp.pop();
            
        }
        //print the original stack
         cout<<endl<<st.size()<<endl;
         while(st.size()>0){
            cout<<st.top()<<" ";
            st.pop(); 
         }
    return 0;
}