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
    void ReversalFunction(ListNode* p, ListNode*& head){
        if(p->next == NULL){
            head = p;
            return;
            //return head;
        }
        ReversalFunction(p->next, head);
        ListNode* temp = p->next;
        temp->next=p;
        p->next=NULL;
    }
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL ) return NULL;
        ReversalFunction(head,head);
        return head;
    }
};