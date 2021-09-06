// 链表的遍历，删除, 清楚

#include "linkedlist2.h"
// typedef struct _node
// {
//     /* data */
//     int number;
//     struct _node *next;
// } Node;

// typedef struct _list
// {
//     /* data */
//     Node *head;
//     Node *tail;
// } List;

void add(List *plist, int number);
void print_linkedlist(List *plist);
// find:return 0 not find, 1 find
int find(List *plist, int target);
int delete_linkedlist(List *plist, int target);
int isNUll(List *plist);
void clear_linkedlist(List *plist);


int main(int argc, char const *argv[]){
    List list;
    list.head = list.tail = NULL;

    int number;
    //一： add a new node to my linkedlist
    scanf("%d",&number);
    while(number != -1){
        // 1.add 
        add(&list, number);
        // 2.scanf again
        scanf("%d",&number);
    }
    //二：traverse the linkedlist,print
    print_linkedlist(&list);
    //三: find the node in my linkedlist
    int target = 2;
    int isFound = 0;
    isFound = find(&list, target);
    if(isFound)
        printf("%d is in the linkedlist.\n",target);
    else    
        printf("%d is not found\n",target);
    //四：delete the specified node
    int isDeleted = 0;
    target = 1;
    isDeleted = delete_linkedlist(&list, target);
    printf("main:isDeleted = %d\n",isDeleted);
    print_linkedlist(&list);

    int tmp = isNUll(&list);
    if(tmp == 0)
        printf("main:linkedlist is not NULL\n");
    else
        printf("main:linkedlist is NULL\n");

    //五.清除链表，释放缓存
    clear_linkedlist(&list);



    return 0;
}

void add(List *plist, int number){
    //1.新建一个node，value = number
    Node *p = (Node*)malloc(sizeof(Node));
    p->value = number;
    p->next = NULL;
    //2.find the last of the plist and attach
    Node *last = plist->head;
    if(last){
    while(last->next){
        last = last->next;
    }
    last->next = p;
    }
    else{
        // plist->head = NULL
        plist->head = p;
    }
  
}


void print_linkedlist(List *plist){
    Node *pnode = plist->head;
    while(pnode){
        printf("print_linkedlist:%d\n",pnode->value);
        pnode = pnode->next;
    }
}

// find:return 0 not find, 1 find
int find(List *plist, int target){
    int isFound = 0;
    //1.traverse and compare
    Node *pnode = plist->head;
    while(pnode && pnode->value != target){
        pnode = pnode->next;
    }
    if(pnode == NULL)
        isFound = 0;
    else if(pnode->value == target)
        isFound = 1;
    printf("find:isFound = %d\n",isFound);
    return isFound;
};

// return isDeleted = 1 succeeded, isDeleted = 0,failed
int delete_linkedlist(List *plist, int target){
    int isDeleted = 0;
    // 1 2 3 4 5
    //delete 2
    //pre,curr, curr = 2, pre->next = curr->next
    //delete 1
    //单独考虑
    //while(curr != NULL && curr->value != target)
    //1. 空链表
    if(plist->head == NULL)
        isDeleted = 0;
    //2.非空链表
    else{
        //2.1head是要删除的节点
        if(plist->head->value == target){
            plist->head = plist->head->next;
            isDeleted = 1;
        }
        else{
            Node *pre = plist->head;
            Node *curr = pre->next;
            while(curr != NULL && curr->value != target){
                pre = curr;
                curr = curr->next;
            }
            if(curr == NULL)
                isDeleted = 0;
            else{
                //curr->value == target;
                pre->next= curr->next;
                free(curr);
                isDeleted = 1;
            }
        }
    }
    printf("delete_linkedlist:isDeleted = %d\n",isDeleted);
    return isDeleted;

};

//return 1: list is NULL, return 0,list is not NULL
int isNUll(List *plist){
    if(plist->head == NULL)
        return 1;
    else
        return 0;
};

void clear_linkedlist(List *plist){
    Node *p = plist->head;
    Node *q = p->next;
    while(p){
        printf("clear_linkedlist:%d\n",p->value);
        free(p);
        p = q;
        q = q->next;
    }
};