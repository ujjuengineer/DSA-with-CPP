/*
merge k sorted list : 
    we have given a vector of linked list, we have to mearge all of them in sorted 
    order 

    algo : 
        pick the first 2 list and erase it from vector, and merge them using merge
        function and then push the merged list in the last
        then again pick the first 2 list and erase it from vector and merge and push into last
        keep doing this untill the length of the vector become 1
        and finally return the last remaining element of the vector
*/