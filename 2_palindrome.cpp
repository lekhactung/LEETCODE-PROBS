#include <iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(long x) {
        if(x>=0){
            long ans = 0;
            long tmp =x;
            while(tmp!=0){
                ans = ans*10 + tmp%10;
                tmp/=10;
            }
            if(ans == x){
                return true;
            }
        }
            return false;
    }
};

int main(){
    Solution s;
    cout << s.isPalindrome(-121);

    return 1;
}