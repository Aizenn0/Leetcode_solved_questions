/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>a;
        ListNode* temp=head;
        while(temp!=nullptr){
            a.push_back(temp->val);
            temp=temp->next;
        }
        int n=a.size();
        for(int i=0; i<n/2; i++){
            if(a[i]!=a[n-i-1]){
                return false;
                break;
            }
        }
        return true;
    }
};