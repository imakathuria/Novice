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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n==0)return head;
        ListNode* temp=head;
        while(n>0 && temp){
            temp=temp->next;
            n--;
        }
        if(!temp){
            return head->next;
        }
        // cout<<temp->val;
        ListNode* temp2=head,*prev=NULL;
        while(temp and temp->next){
            temp=temp->next;
            prev=temp;
            temp2=temp2->next;
        }
        // cout<<temp2->val;
        if(temp2==head){
            if(head->next){
                head->next=head->next->next;
            }
            return head;
        }
        if(!prev){
            return head->next;
        }
        
        if(prev and prev->next){
            prev->next=prev->next->next;
            return head;
        }
        
        if(temp2){
            ListNode* t=temp2->next;
            temp2->next=temp2->next->next;
            delete t;
        }
        
        return head;
    }
};