# include "header.h"

int QueuePeek(myQueue * head)   {

    // Case 1: if the queue is not empty return the data stored in the head node. 

    if (head != NULL)   {
        return head->data;
    }

    // Case 2: if the queue is empty return -1. 

    else{
        return -1;
    }
}