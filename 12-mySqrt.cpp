#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        long int i = 0 ;
        long int y =x;
        while(i*i<y){
            i++;
            if(i*i>x){
                i--;
                break;
            }
        }
        
    return i;
    }
};
int main(){
    Solution s;
    cout  << s.mySqrt(4);
    return 1;
}
