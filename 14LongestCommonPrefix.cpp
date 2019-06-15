#include<iostream>
#include<vector>
#include<string>
#include<stack>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        string s {};
        if(strs.size() == 0){
            return s;
        }
        int j {};
        char compr {};
        for(int i = 0; i<strs[0].length(); ++i){
            compr = strs[0][i];
            for(int j = 1; j<strs.size(); ++j){
                if(compr != strs[j][i] || i>strs[j].size()){
                    i = strs[0].length();
                    break;
                }
                
            }
            s.push_back(strs[0][i]);
        }
        return s;
    }

int main() {
    vector<string> vec = {"flower","flow","floght"};
    cout<<longestCommonPrefix(vec);
}
