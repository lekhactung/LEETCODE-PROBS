#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int mainLength = haystack.length(); // Độ dài chuỗi chính
        int subLength = needle.length();   // Độ dài chuỗi con

    // Duyệt qua từng ký tự của chuỗi chính
        for (int i = 0; i <= mainLength - subLength; i++) {
            // Giả sử chuỗi con xuất hiện tại vị trí i, ta so sánh từng ký tự của chuỗi con với chuỗi chính
            int j = 0;
            while (j < subLength && haystack[i + j] == needle[j]) {
                j++;
            }

            // Nếu j bằng độ dài chuỗi con, nghĩa là ta đã tìm được chuỗi con trong chuỗi chính
            if (j == subLength) {
                return i; // Trả về vị trí bắt đầu của chuỗi con trong chuỗi chính
            }
        }

    // Nếu không tìm thấy chuỗi con, trả về -1
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