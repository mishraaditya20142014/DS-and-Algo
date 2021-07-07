/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* A) {
    ListNode* prev=NULL; // To point to the previous node...
    ListNode* curr=A; // To point to the current node...
    ListNode* temp=NULL; // To temporarily hold the address of the node next to the current node (when we change the pointer from current's next to current's previous node)
    while(curr!=NULL) 
    {
        temp=curr->next; // pointing the temporary pointer to the node next to the current node, before changing the next pointer of the current node
        curr->next=prev; // changing the next pointer of the current node, to make it point to the previous node
        prev=curr; // now incrementing the previous pointer to the next node the previous pointer (which, here, is current)
        curr=temp; // Now, finally reffering the current pointer back to the main list to carry out further operations
    }
    return prev; // After exiting the while loop, the list will be reversed and the previous pointer would be the head of the reversed list
}
