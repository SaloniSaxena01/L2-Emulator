#ifndef __LINKEDLIST__
#define __LINKEDLIST__
// Performing header file management to avoid duplicate inclusion of header file.


typedef struct _doublylinkedlist
{
    struct _doublylinkedlist *left;
    struct _doublylinkedlist *right;
} doublylinkedlist_t;
// We are implementing an updated version of Linked List where data is stored as
// a part of the node, not as a pointer which points to some structure.


#define IS_DOUBLY_LINKED_LIST_EMPTY(dllptr)                                                                 \
    ((dllptr)->right == 0 && (dllptr)->left ==0)
// Checks if right and left pointers of the linked list are both empty, if so returns True.
// Else, it returns false.


#define BASE(dllptr)                                                                                        \
    ((dllptr)->right)
// Returns the Base Node (Starting Node) of the Linked List as the first right
// element will point to the starting node.


#define ITERATE_DOUBLY_LINKED_LIST_BEGINING(dllptr_start, dllptr)                                           \
{                                                                                                           \
    doublylinkedlist_t *_doublylinkedlist_ptr = NULL;                                                       \
    dllptr = BASE(dllptr_start);                                                                            \
    for(; dllptr!=NULL; dllptr = _doublylinkedlist_ptr)                                                     \
    {                                                                                                       \
        _doublylinkedlist_ptr = (dllptr)->right;

        #define ITERATE_DOUBLY_LINKED_LIST_END(dllptr_start, dllptr)                                        \
    }                                                                                                       \
}
// Iterates over the doubly linked list from the begining to end.
// Returns the next element in each iteration so as to achieve the loop, two declarations are required.
// Returns the link which doesn't have a '\' at the end of the line.
// To mark the continuity, another Macro is defined.


#endif
// Ending Header File Management