/* 
    check wether there is cycle in linkedlist or not
    algo : 
    ->  make a slow pointer and a fast pointer, keep moving fast by 2 and slow by 1
    ->  when slow == fast before fast != NULL and fase->next != NULL, then it a 
        cycle else not a cycle
*/