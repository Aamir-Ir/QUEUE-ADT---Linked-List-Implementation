# include "header.h"

int QueueDequeue(myQueue ** head, myQueue ** tail)    {
    int headData;                                       // Keep track of head data.
    myQueue * sucNode;                                  // Keep track of the successor node.
    myQueue * removedNode;                              // Keep track of the node you will remove inorder to free it later.

    // Case 1: Remove the head of the queue.

    if (head != NULL)    {
        headData = (*head)->data;
        removedNode = *head;                             // Keep track of the node you want to remove so you can free it.
        sucNode = (*head)->next;
        *head = sucNode;

        /*
            Sub Case: If the head node is the only node in the queue make sure the ail pointer also points to NULL so we meet the 
            conditions for an empty queue. 
        */

        if (sucNode == NULL)    {
            *tail = NULL;
        }

        free(removedNode);                              // Free the node you removed from the linked list.
        return headData;
    }
    else    {
        headData = -1;
        return headData;
    }
}