#include<iostream>
#include<vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
        int i {};
        for(i; i<nums.size(); ++i){
            if(nums[i]>=target){
                return i;
            }
            
        }
        return i;
    }
int main(){
    vector<int>vec = {2,3,4,6,7,9,10,11,16,21,28,99};
    int index = searchInsert(vec,15);
    cout<<index<<endl;
    // for(auto i = vec.begin(); i!=vec.end(); ++i){
    //     cout<<*i<<" ";
    // }
}