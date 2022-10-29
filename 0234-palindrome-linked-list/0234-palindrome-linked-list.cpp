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
    ListNode* getMid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* reverseLL(ListNode* head){
        ListNode*prev=NULL;
        ListNode*next=NULL;
        ListNode*curr=head;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next; 
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL)
              return true;
        //step1-find middle
        ListNode* mid=getMid(head);
        //step2-revere LL after mide
        ListNode* temp=mid->next;
        mid->next=reverseLL(temp);
        //step3-compare both half
         ListNode*head1=head;
         ListNode*head2=mid->next;
        while(head2!=NULL){
            if(head1->val!=head2->val){
                return false;
            }
            head1=head1->next;
            head2=head2->next;
        }
        //step4-repeat step 2
         temp=mid->next;
        mid->next=reverseLL(temp);
        return true;
    }
};