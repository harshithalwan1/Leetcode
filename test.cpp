#include<iostream>
#include<vector>
#include<string>
#include<stack>
#include<stdio.h>
#include<list>
#include<iterator>
#include<climits>
#include <math.h>

using namespace std;

int myAtoi(string str) {
        int i = 0;
        int result {};
        bool negative = false;
        while(i<str.size() && str[i] == ' '){
            i++;
        }
        if(str[i] == '-'){
            negative = true;
            i++;
        }
        for(; i < str.size() && str[i]>48 && str[i]<58 ; i++){
            if(result*10 + (str[i]-48) >= INT_MAX || result*10 + (str[i]-48) <= INT_MIN){
                return INT_MAX;
            }
            if(negative && result*10 + (str[i]-48) >= INT_MAX || result*10 + (str[i]-48) <= INT_MIN){
                return INT_MIN;
            }
            result = result*10 + (str[i]-48);
        }

        return result;
    }

int main() {
    string s = "-91283472332";
    //cout<<pow(10,0)<<" "<<pow(10,2)<<" "<<(int)s[4]-48;
    cout<<myAtoi(s);
}
