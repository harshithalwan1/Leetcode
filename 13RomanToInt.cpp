#include<iostream>
#include<vector>
#include<string>
#include <map>

using namespace std;
int romanToInt(string s) {
    int result {};
    int size = s.length();
    map<char,int> number = {
        {'M',1000},
        {'D',500},
        {'C',100},
        {'L',50},
        {'X',10},
        {'V',5},
        {'I',1}
    };
    int i {};
    for(i; i<size-1; ++i){
        if(number[s[i]]>=number[s[i+1]]){
            result = result + number[s[i]];
        }
        else{
            result = result - number[s[i]];
        }
    }
    result = result + number[s[i]];

    return result;
    }
// int romanToInt(string s) {
//     enum roman {M = 1000, D = 500, C = 100, L = 50, X = 10, V = 5, I = 1};
//     int result {};
//     int size = s.length();
//     roman R;
//     R = (roman)s[0];
//     cout<<R;
//     cout<<s[0];
//     for(int i = 0; i<size-1; ++i){
//         if(s[i]>=s[i+1]){
//             result = result + s[i];
//         }
//         else{
//             result = result - s[i];
//         }
//     }
//     result++;
//     return result;
//     }

int main() {
    string s = "";
    cout<<romanToInt(s);
}
