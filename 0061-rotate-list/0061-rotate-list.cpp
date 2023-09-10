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
    ListNode* rotateRight(ListNode* head, int k) {
        //T.C. = O(length of list)
        //S.C. = O(1)
        if(head==NULL ||head->next==NULL ||k==0)return head;
        ListNode* temp=head;
        int length=1;
        while(temp->next!=NULL){
            length++;
            temp=temp->next;
        }
        
        //point last node to first
        temp->next=head;
        //if length more than k then
        k=k%length;
        //to get end of list
        k=length-k;
        while(k--)temp=temp->next;
        //break list and pointing to NULL
        head=temp->next;
        temp->next=NULL;
        return head;
        
    }
};