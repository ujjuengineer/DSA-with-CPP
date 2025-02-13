// sort list

/*
using the technique of merge sort, we can sort the linked list in O(n log n) time complexity 
and O(1) space complexity

algo : 
    break the linkedList into 2 parts, and the sort them using recursion and then merge both sorted part

HOW TO FIND MIDDLE OF THE LINKEDLIST ? 

 1. finding right middle
 Node* slow = head;
 Node* fast = head;
 while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
 }
 return slow;

 2. finding left middle
 Node* slow = head;
 Node* fast = head;
 while(fast->next != NULL && fast->next->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
 }
 return slow;

*/