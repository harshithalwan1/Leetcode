#include<iostream>
#include<vector>

using namespace std;

vector<int> plusone(vector<int> digits){

    for(int i = digits.size()-1; i>-1; --i){
        if(digits[i]<9){
            (digits[i])++;
        }
        else{
            digits[i]=0;
            (digits[i-1])++;
        }
    }
    return digits;
}

int main(){
    vector<int> vec = {1,2,3,9};
    vector<int> result = plusone(vec);
    for(auto i = result.begin(); i!=result.end(); ++i){
        cout<<*i<<" ";
    }
}