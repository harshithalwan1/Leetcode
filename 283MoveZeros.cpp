#include<iostream>
#include<vector>
#include<string>
#include<stack>

using namespace std;

void moveZeroes(vector<int>& nums) {
        int i {}, j {};
        for( ; i<nums.size(); ++i){
            if(nums[i]==0){
                j = i;
                break;
            }
        }
        while(i<nums.size()-1){
            if(nums[i+1]!=0){
                swap(nums[j],nums[i+1]);
                j++;
            }
            i++;
        }
    }

int main() {
    vector<int> vec = {0,1,3,0,2,4,0,7,3,6,2,0,13,46,0,63};
    moveZeroes(vec);
    for(auto i = vec.begin(); i!=vec.end(); ++i){
        cout<<*i<<" ";
    }
}
