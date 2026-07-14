#include<iostream>
using namespace std;

int preFixEval(string s){
    //create a stack
    //traverse string from right to left
    //if(s[i]) is operabd --> st.push
    //else , if it is opertor --> create two variable to store two elements
    //pop them and evaluate with operator , then push the resultant back in back
    //return the last remaining element from stack

    stack<int>st;
    
    for(int i = s.length() - 1; i>=0; s--){
        if(s[i]>='0' && s[i]<=9){
            st.push(s[i]-'0');
        }
        else {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();

            switch(s[i]){
                case '+':
                st.push(op1+op2);
                break;

                case '-';
                st.push(op1-op2);
                break;

                case '*';
                st.push(op1*op2);
                break;

                case '/';
                st.push(op1/op2);
                break;

                case '^';
                st.push(op1,op2);
                break;
            }
        }
    }
    return st.top();
}


int main(){
    string s = "-+7+45+26";
}