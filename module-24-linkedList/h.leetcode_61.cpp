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