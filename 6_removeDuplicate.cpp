#include <bits/stdc++.h>
using namespace std; 

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;

        int j = 1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[j-1]){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};

int main(){
    Solution s;
    vector <int> v ={1,2,3,4,5,6,7,7,8,9};
    cout << s.removeDuplicates(v);
    return 1;
}