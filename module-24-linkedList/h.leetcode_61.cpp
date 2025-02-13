/*
Rotate list : 
    we have to rotate the list by k, so first 
        if(k==0) return head;
        if(size==0 || size==1) return head;
        k = k % size;

        algo: 
            reach k+1 th element form last
            break the node
            name the kth ele from last as new head
            join last element with prev head
            return new head
*/

/*

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0) return head;
        // finding lenght
        ListNode* temp = head;
        ListNode* tail;
        int size = 0;
        while(temp != NULL){
            if(temp->next == NULL) tail = temp;
            temp = temp->next;
            size ++;
        }
        if(size==1 || size==0) return head;
        k%=size;
        if(k==0) return head;

        // rotating the list
        // reaching k+1 ele from last
        ListNode* slow = head;
        for(int i = 1; i<=k+1; i++){
            slow = slow->next;
        } 
        temp = head;
        while(slow != NULL){
            slow = slow->next;
            temp = temp->next;
        }
        // now temp is at n+1th from last
        ListNode* newHead = temp->next;
        temp->next = NULL;
        tail->next = head;
        return newHead;
    }
};

*/