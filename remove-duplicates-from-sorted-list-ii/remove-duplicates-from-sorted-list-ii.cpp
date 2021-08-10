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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int>m;
        ListNode* temp= head;
        while(temp!=NULL){
            m[temp->val]++;
            temp=temp->next;
        }
        ListNode* res=new ListNode();
        for(auto x:m){
            if(x.second==1){
                ListNode* t=new ListNode(x.first);
                ListNode* d=res;
                while(d->next!=NULL){
                    d=d->next;
                }
                d->next=t;
            }
        }
        return res->next;
    }
};