#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<stdio.h>
#include<list>
#include<iterator>
#include<climits>

using namespace std;

int reverse(int x) {
        string s = to_string(x);
        cout<<s<<endl;
        long long int result {};
        int i {};
        if(s[0] == '-'){
            i = 1;
        }
        else{
            i = 0;
        }
        int j = s.size()-1;
        while(i<=j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        result = stoll(s);
        if(result > INT_MAX || result < INT_MIN) return 0;
        return result;
        
    }

int main() {
    int x = 1534236469;
    cout<<reverse(x);
}
