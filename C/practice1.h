#include <stdio.h>
typedef struct _node
{
    /* data */
    int value;
    struct _node *next;
} Node;

typedef struct _list{
    Node *head;
    Node *tail;
} List;