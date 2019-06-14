#include<iostream>
#include<vector>
#include<string>
#include<stack>

using namespace std;

int climbStairs(int n) {
    if(n==0 || n==1){
        return 1;
    }
    int A = 1;
    int B = 1;
    int result {};
    for(int i = 2; i <= n; ++i){
        result = A + B;
        A = B;
        B = result;
    }
    return result;
}


int main() {
    
    cout<<climbStairs(5);
    
}
