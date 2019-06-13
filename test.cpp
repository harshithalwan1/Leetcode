#include<iostream>
#include<vector>
#include<string>

using namespace std;

int maxSubArray(vector<int>& nums) {
        int currentMax = nums[0] ;
        int Max = nums[0];
        for(int i = 1;i<nums.size();++i){
            if(nums[i] > currentMax+nums[i]){
                currentMax = nums[i];
            }
            else{
                currentMax = currentMax+nums[i];
            }
            if(currentMax>Max){
                Max = currentMax;
            }
        }
        return Max;
    }

int main() {
    vector<int>vec = {-1};
    cout<<maxSubArray(vec);
}
