#include<iostream>
#include<vector>
#include<string>
#include<stack>

using namespace std;

 string addBinary(string a, string b) {
        int sizeA = a.size();
        int sizeB = b.size();
        if(sizeA>sizeB){
            while(sizeA-sizeB){
                b = "0"+b;
                sizeB++;
            }
        }
        else{
            while(sizeB-sizeA){
                a = "0"+a;
                sizeA++;
            }
        }
        cout<<a<<endl<<b<<endl;
        char c = 48;
        string s {};
        sizeA = a.size();
        sizeB = b.size();
        while(sizeA > 0){
            if(a[sizeA-1] + b[sizeB-1] + c == 144){
                s = "0"+s;
                c = 48;

            }
            else if(a[sizeA-1] + b[sizeB-1] + c == 146){
                s = "0"+s;
                c = 49;
            }
            else if(a[sizeA-1] + b[sizeB-1] + c == 145){
                s = "1"+s;
                c = 48;
            }
            else{
                s = "1" + s;
                c = 49;
            }
            sizeA--;
            sizeB--;
        }
        if(c==49){
            s = "1" + s;
        }
        return s;
}

int main() {
    string s1 = "10101";
    string s2 = "1101";
    //int c = 1;
    //string s {};
    //cout<<s1[s1.size()-1] + s2[s2.size()-1] + (char)1<<endl;
    //cout<<(char)48;
    cout<<addBinary(s1,s2);

}
