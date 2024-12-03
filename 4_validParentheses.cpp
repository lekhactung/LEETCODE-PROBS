#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack <char> k;
        for(char c : s){
            if( c == '(' || c == '{' || c=='['){
                k.push(c);
            } else {
                if(k.empty() || (c ==')' && k.top()!='(') || (c ==']' && k.top()!='[') || (c =='}' && k.top()!='{') ){
                    return false;
                } else {
                    k.pop();
                }
            }
        }
        return k.empty() ;
    }
};

int main(){
    string str = "[]{}";
    Solution s;
    if(s.isValid(str)){
        cout << str <<  " is valid! \n";
    } else { 
        cout << str << "isn't valid!\n ";
    }
    return 1;
}