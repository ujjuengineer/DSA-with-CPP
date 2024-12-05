/* we have to delte n element from the last, so n element from the last is m element from first, where 
    m = size - n + 1, 
    so first find size, then find m, and then find the idx that needs to be deleted, i.e., m - 1
    no delete as usual method

  =>  another aproach, slow and fast pointer method

    if we have to reach nth idx form the last, then first move the fast pointer n time forward, and then
    keep moving fast and slow pointer by 1 step untill the fast pointer reach at null.
    *since we have to delete nth node from last, so we have to reach n+1 node form last, so we will move 
    fast pointer n+1 times, and if fast == null before moving n+1 times, it means we had to delete the head, so just delete the head and return next node 
