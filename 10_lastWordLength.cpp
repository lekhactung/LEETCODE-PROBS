#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int counting = false;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]!= ' '){
                length++;
                counting = true;
            } else if(s[i]==' ' && counting){
                break;
            }
        }
        return length;
    }
};

int main(){
    Solution s;
    string str = "Hello World!";
    cout << s.lengthOfLastWord(str);

    return 1;
}
