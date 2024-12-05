// given an linked list, we have to find the middle element
// simple solution : find the length of the linked list and then find the middle element

// but in interview, we have to find it in one pass, how do we archive this ?

/*
    we can archive this using slow and fast pointer, slowpointer += 1, fastpointer += 2, initally both will at head

    in the case of even : 
    1 2 3 4 5 6 
*/