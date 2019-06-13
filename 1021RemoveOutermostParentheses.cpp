#include<iostream>
#include<vector>
#include<string>
#include<stack>

using namespace std;

string removeOuterParentheses(string S) {
        stack<char>par {};
        string str {};
        int open {};
        int close {};
        for(int i = 0,j = 0; j<S.size(); ++j){
            if(S[j]=='(') ++open;
            else ++close;
            if(open==close){
                str = str + S.substr(i+1,j-i-1);
                i = j + 1;
            }
        }
        return str;
    }


int main() {
    string s = "((()))(()())";
    string res = removeOuterParentheses(s);
    cout<<res;
    
}
