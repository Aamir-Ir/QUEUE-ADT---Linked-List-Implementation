#include <stdio.h>          
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h> 

/*
    myQueue structure consists of the data which is a single integer and the dynamic coonection to the next node in the stack.
*/

typedef struct queue{
    int data; 		       // Integer value.
    struct queue * next;   // Dynamic connection to the next node in the stack.
}myQueue;

// Common Stack ADT Operations (See functions for further explanations).

void QueueEnqueue(myQueue ** head, myQueue ** tail, int item);

int QueueDequeue(myQueue ** head, myQueue ** tail);

int QueuePeek(myQueue * head);

bool isEmpty(myQueue * head);

int getLength(myQueue * head);

// Helper functions (See functions for further explanations).

void freeQueue(myQueue * head);

void printQueue(myQueue * head);

int menu();