#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};

int main(){
    vector <int> v1 = {1,2,3,4,5,6};
    Solution s;
    vector<int> result = s.twoSum(v1, 10);
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
        // cout << "Values: " << v1[result[0]] << ", " << v1[result[1]] << endl;
    } else {
        cout << "No solution found!" << endl;
    }
    return 1;
}