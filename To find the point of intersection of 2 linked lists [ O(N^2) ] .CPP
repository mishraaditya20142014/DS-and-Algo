/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * typedef struct ListNode listnode;
 * 
 * listnode* listnode_new(int val) {
 *     listnode* node = (listnode *) malloc(sizeof(listnode));
 *     node->val = val;
 *     node->next = NULL;
 *     return node;
 * }
 */
/**
 * @input A : Head pointer of linked list 
 * @input B : Head pointer of linked list 
 * 
 * @Output head pointer of list.
 */
//Brute Force Approach
listnode* getIntersectionNode(listnode* A, listnode* B) 
{
    while(A!=NULL)
    {
        listnode* temp=A;
        
        while(B!=NULL)
            if(A==B)
                return A;
            else 
                B=B->next;
                
        A=A->next;
    }
}
