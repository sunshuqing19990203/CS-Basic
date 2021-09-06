#include "practice1.h"
#include <stdio.h>
#include <stdlib.h>
void add(List *plist, int number);
int main(int argc, char const *argv[]){
    int number;
    // initialize the list
    List list;
    list.head = list.tail = NULL;
    scanf("%d",&number);
    while(number != -1){

        add(&list,number);
        scanf("%d",&number);
    }

    //test:print the linkedlist
    Node *tmp = list.head;
    while(tmp){
        printf("main:%d\n",tmp->value);
        tmp = tmp->next;
    }

}

void add(List *plist, int number){
    //add to linkedlist
    //1.initialize the new Nodeptr p
    Node *p = (Node *)malloc(sizeof(Node));
    p->value = number;
    p->next = NULL;
    //2.reverse : find the last
    Node *last = plist->head;
    //2.1.if head != NULL then...
    if(last){
        while(last->next){
            last = last->next;
        } 
        //3. attach
        last->next = p;
    }
    //2.2 if head == NULL then..
    else{
        plist->head = p;
    }

}