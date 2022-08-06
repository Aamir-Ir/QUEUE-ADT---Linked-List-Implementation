# include "header.h"

void QueueEnqueue(myQueue ** head, myQueue ** tail, int item)    {
    myQueue * newNode = malloc(sizeof(myQueue));                    // Create space on the HEAP for 1 node of type myQueue.
    newNode->next = NULL;                                           // Make the pointer part point to NULL.
    newNode->data = item;                                           // Fill the data part.

    /* 
        Case 1: The queue is empty (because head pointes to NULL) therefore both the head and the tail nodes will be made to point to 
        the newNode.
    */

    if (*head == NULL)   {   
        *head = newNode;
        *tail = newNode;
    }

    /* 
        Case 2: The queue is not empty as the head pointer does not point to NULL this means that we append to the start of the queue by 
        modifying the tail's next node to point to newNode and then updating the tail pointer to newNode as that it is the new tail.
    */

    else{
        (*tail)->next = newNode;
        *tail = newNode;
    }
}