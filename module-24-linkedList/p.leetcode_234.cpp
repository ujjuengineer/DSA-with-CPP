// check if given linkedlist is palindrome or not
/*
    METHOD 1 : tc : O(n), sc : O(n) 
    step 1 : create a deep copy of the given linkedList
    step 2 : reverse the copy linkedLIst using prev approach (leetcode 206)
    step 3 : now check the both linkedList's nodes value


    // creating deep copy
        ListNode* cpy = new ListNode();
        ListNode* tcpy = cpy;
        ListNode* t = head;
        while(t != NULL) {
            ListNode* temp = new ListNode(t->val);
            tcpy->next = temp;
            t = t->next;
            tcpy = tcpy->next;
        }

        // reverse the deep copy
        cpy = cpy->next; // adjusting the head of the copied linkedlist
        ListNode* cpyHead = reverse(cpy);  

        // checking palindrome
        while(cpyHead != NULL) {
            if(cpyHead->val != head->val) return false;
            cpyHead = cpyHead->next;
            head = head->next; 
        } 
        return true; 
*/

/*
    METHOD 2 : tc : O(n), sc : O(1) 

    step 1 : find the left middle
    step 2 : reverse the right part and then attach the reversed part to the left midddle
    step 3 : make 2 ptr at 0 and leftMiddle->next;
    step 4 : now check if right part and left part have same values or not, if it has then it is a palindrome else not a palindrome 
*/