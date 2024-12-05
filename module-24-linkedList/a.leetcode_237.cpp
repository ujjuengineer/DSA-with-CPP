// delete the target node when you don't have the access to the head, you only have target node

// algo : 

/*
replace the value of the target node by its next node and delete the next node
    target->val = target->next->val; 
    target->next = target->next->next;
    
*/