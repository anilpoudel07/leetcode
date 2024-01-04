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
    ListNode* reverseList(ListNode* head) {
        ListNode * temp = head;
        ListNode *current = head;
        ListNode *previous = NULL;
       

while(temp!=NULL)
{
temp = temp->next;
current->next = previous;
previous = current;
current = temp;
}
head = previous;
return head;

        
    }
};