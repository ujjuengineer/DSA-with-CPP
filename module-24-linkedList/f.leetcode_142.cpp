/*
finding where cycle start
    algo : 
    ->  first check wether there is cycle or not
    ->  if there is cycle, then create a temp node and keep moving slow and temp
        node by 1 untill they become equal, 
    ->  where ever they become equal that is our node.
*/

// to delete any element from the front of the vector, we use
// arr.erase(arr.begin()); 