# include "header.h"

/*
    A function name menu() to print the menu to reduce redundancy.
*/

int menu() {   
    int num;    // Used for input.

    // Menu for all common Queue ADT operations.

    printf("1) Enqueue Operation.\n");
    printf("2) Dequeue Operation.\n");
    printf("3) Peek operation.\n");
    printf("4) IsEmpty Operation.\n");
    printf("5) GetLength Operation.\n");
    printf("6) Print Operation.\n");
    printf("Quit: 0\n");
    scanf("%d", &num);

    // Return users selections.
    
    return num;
}