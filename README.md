# QUEUE-ADT---Singly-Linked-List-Implementation---Personel-Project
This project is a personal project of mine where I have implemented the QUEUE ADT as a Linked List. It contains the common operations performed by a simple queue ADT which is enqueue, dequeue, peek, is empty, and get length. Each file contains an operation which is explained through the comments.

Memory:
All the nodes are dynamically allocated. I have also made sure to keep a track of all the nodes I remove from the stack and free them properly. To confirm this I have used valgrind to make sure there are no memory leaks, and initialization errors.

Compilation:
Use the make command to compile the program through the makefile. then use the executable named queue (./queue) to execute the program.
