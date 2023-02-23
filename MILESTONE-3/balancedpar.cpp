#include<unordered_map>
#include<stack>
unordered_map<char,int>symbols={{'{',-1},{'[',-2},{'(',-3},{'}',1},{']',2},{')',3}};
bool isBalanced(string s) 
{
   


    stack<char>st;
    for(auto brackets:s){
        if(symbols[brackets]<0){
            st.push(brackets);
        }else{
            if(st.empty()){
                return 0;
            }
            char c=st.top();
            st.pop();
            if(symbols[brackets]+symbols[c]!=0){
                return 0;
            }
        }
    }
    if(st.empty()){
        return 1;
    }else{
        return 0;
    }
}
