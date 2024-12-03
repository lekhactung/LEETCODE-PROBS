#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0 ;
        int r = nums.size()-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]<target){
                l = mid+1;
            } else{
                r = mid-1;
            } 
        }
        return l;
    }
};

int main(){
    Solution s;
    vector <int> nums;
    cout << s.searchInsert(nums,10);
    return 1;
}
