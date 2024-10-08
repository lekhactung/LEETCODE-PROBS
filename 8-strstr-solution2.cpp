#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.find(needle) != string::npos)
            return haystack.find(needle);
        return -1;
    }
};
int main(){
    Solution s;
    string haystack = "sadbutsad";
    string needle = "but";
    cout << s.strStr(haystack,needle);
    return 1;
}