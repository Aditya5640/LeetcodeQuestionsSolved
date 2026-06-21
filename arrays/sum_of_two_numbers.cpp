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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        //method 1: add the number in corresponding nodes of the linked list, add the carry to number of next node and store them in a new linked list, return the final linked list
        ListNode* dummy= new ListNode(0);
        ListNode* tail= dummy;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
            int digit1=0;
            int digit2=0;
            if(l1){
                digit1=l1->val;
                l1=l1->next;
            }
            if(l2){
                digit2=l2->val;
                l2=l2->next;
            }
            int sum = digit1 + digit2 + carry;
            int newDigit=sum%10;
            carry=sum/10;
            tail->next=new ListNode(newDigit);
            tail=tail->next;
        }
        return dummy->next;
    }
};
