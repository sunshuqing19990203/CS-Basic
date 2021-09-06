#include <stdio.h>
#include <stdlib.h>

typedef struct _node
{
    /* data */
    int value;
    struct _node *next;
} Node;

typedef struct _list
{
    /* data */
    Node *head;
    Node *tail;
} List;

