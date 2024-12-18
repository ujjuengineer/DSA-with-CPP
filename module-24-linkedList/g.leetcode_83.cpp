/*
algo : 
    remove duplicates:
        create 2 Node a and node b;
        a = head , b = head;
        while(b != NULL) -> while (a->val == b->val) -> b = b->next;
            and finally a->next = b;
                a = b;
*/