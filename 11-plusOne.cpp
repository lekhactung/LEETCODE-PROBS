#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] != 9) {
                digits[i] += 1;
                return digits;
            }
            digits[i] = 0;
        }
        vector<int> newDigits(digits.size() + 1, 0); 
        newDigits[0] = 1; 
        return newDigits; 
        
    }
};
int main(){
    Solution s;
    vector tmp ={9};
    vector v = s.plusOne(tmp);
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }

    return 1;
}
