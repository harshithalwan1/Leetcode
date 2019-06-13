#include<iostream>
#include<string>
using namespace std;

string decode(string s){
    if(s.find("[")==string::npos){
        return s;
    }
    else{
        s.pop_back();
        string times {};
        for(int i = 0; i<s.length(); ++i){
            if(s[i]=='['){
                break;
            }
            if(s[i] > '0' && s[i] < '9'){
                times.push_back(s[i]);
            }
        }
        int timeI = stoi(times);
        string result {};
        for(int i = 0; i<timeI; ++i){
            result = result + decode(s.substr(s.find('[')+1));
        }
        return result;
    }
}

// string decode(string s){
//     int times = stoi(s);
//     string result {};
//     for(int i = 0; i<s.length(); ++i){
//         if(s[i]=='['){
//             result = s.substr(i+1);
//             result.pop_back();
//             break;
//         }
//     }
//     string cancateS = result;
//     for(int i = 0; i<times-1; ++i){
//         result = result + cancateS;
//     }
//     return result;
// }
int main() {
    string decoded = decode("3[a2[b]]");
    cout<<decoded;
    
}
