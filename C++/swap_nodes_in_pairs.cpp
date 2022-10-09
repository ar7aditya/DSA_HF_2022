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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* p1 = head;
        head=head->next;
        ListNode* p2 = head;
        ListNode* p3=NULL;
        while(p2!=NULL){
            p3=p2->next;
            p2->next=p1;
            if(p3==NULL){
                p1->next=NULL;
                return head;
            }
            if(p3->next!=NULL){
                 p1->next=p3->next;
                 p1=p3;
                 p2=p1->next;
            }
            else{
                p1->next=p3;
                return head;
            }   
        }
        return head;
    }
};
