/* we have to delte n element from the last, so n element from the last is m element from first, where 
    m = size - n + 1, 
    so first find size, then find m, and then find the idx that needs to be deleted, i.e., m - 1
    now delete as usual method

  =>  another aproach, slow and fast pointer method

    if we have to reach nth idx form the last, then first move the fast pointer n time forward, and then
    keep moving fast and slow pointer by 1 step untill the fast pointer reach at null.
    *since we have to delete nth node from last, so we have to reach n+1 node form last, so we will move 
    fast pointer n+1 times, and if fast == null before moving n+1 times, it means we had to delete the head, so just delete the head and return next node 


/* Slow Fast Pointer Approach    

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // we have to delete nth node form the last, so we must reach n+1 th node from last
        ListNode* slow = head;
        ListNode* fast = head;
        
        for(int i = 1; i<=n+1; i++) {
            if(fast == NULL) return head->next; // this for the cases when n = length of the linked list, so head will reach at null after nth slide, so in that we just delete current head
            fast = fast->next;
        }

        // now we have to move the slow and fast pointer both
        while(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
    }
};



Size approach

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // n from last means reach size - n from first

        // finding size
        int size = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp->next;
            size++;
        }

        if(size == 1) {
            head = NULL;
            return head;
        }

        if(size == n){
            // means we have to delete the head
            head = head->next;
            return head;
        }

        // reach size - n index
        temp = head;
        // size - n = 0
        for(int i = 1; i<size-n; i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};

*/