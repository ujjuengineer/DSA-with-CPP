// reverse linkedlist

/*
M1 : REVERSE LIKE AN ARRAY 

    make 2 pointer i = 0, j = size-1, and revrse the value of the nodes, 
    you can create a function, getNodeAt(head, int idx), this function return the node at index idx, and then you just swap the value of the node at i and node at j

    but this is worst approach, it is of time complexity O(n^2)


class Solution {
public:
    ListNode* getEle(ListNode* head, int idx) {
        ListNode* temp = head;
        for(int i = 0; i<idx; i++){
            temp = temp->next;
        }
        return temp;
    }
    ListNode* reverseList(ListNode* head) {
        
        // finding size 
        int n = 0;
        ListNode* temp = head;
        while(temp){
            temp = temp->next;
            n++;
        }

        int i = 0, j = n-1;
        ListNode* iKaNode = head;
        while(i<j){
            ListNode* jKaNode = getEle(head, j);

            int temp = jKaNode->val;
            jKaNode->val = iKaNode->val;
            iKaNode->val = temp;

            iKaNode = iKaNode->next;
            i++, j--;
        }
        return head;
    }
};
*/


/*
M2 : ITERATIVE METHOD : tc = O(n), sc = (1)
    you can create 3 nodes, prev, current, next
    at start make prev = NULL, current = head;
    
    now in loop use this (while current != NULL): 

    next = current->next;
    current->next = prev;
    
    prev = current;
    current = next;

    DRY RUN ON NOTEBOOK FOR BETTER UNDERSTANDING
*/

/*
M3 : RECURSIVE METHOD : tc = O(n) , sc = (n)
*/