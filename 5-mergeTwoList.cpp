//Merge 2 "sorted" list
// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
#include <bits/stdc++.h>
using namespace std; 
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == nullptr){
            return list2;
        } 
        if(list2 == nullptr){
            return list1;
        }

        ListNode *result = nullptr;
        if(list1->val < list2->val){
            result = list1;
            result->next = mergeTwoLists(list1->next,list2);
        } else {
            result = list2;
            result->next = mergeTwoLists(list1,list2->next);
        } 
        return result;
    }
};

void output(ListNode *head){
    while(head!=NULL){
        cout << head->val << " ";
        head = head->next ; 
    }
}

int main(){
    Solution s;
    ListNode tmp = s.mergeTwoLists(list1,list2);

    return 1;
}