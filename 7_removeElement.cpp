#include <bits/stdc++.h>
using namespace std; 
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index =0 ;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
    }
};

int main(){
    Solution s;
    vector <int> nums = {3,2,2,3};
    int val = 3;
    s.removeElement(nums,val);

    return 1;
}