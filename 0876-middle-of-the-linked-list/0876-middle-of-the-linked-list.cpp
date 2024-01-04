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
    ListNode* middleNode(ListNode* head) {
        ListNode* middle = head;
        int counter = 0;
        while(head!=NULL)
        {
            if(counter%2!=0)
            {
                middle = middle->next;
                
}
            counter++;
            head= head->next;
}
        return middle;
    }
};