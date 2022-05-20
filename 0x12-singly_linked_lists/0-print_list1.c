#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

typedef struct node *nodeptr;
struct node {
    int value;
    nodeptr next;

}
typedef struct node node;

int main(int argc, const *chat argv[]){
    nodeptr first = NULL;
    first = malloc(sizeof(node));
    first->next = NULL;

    first->value = 1;
    first->next = malloc(sizeof(node));
    (first->next)->next = NULL;
    (first->next)->value = 2;
    printf("jfdfhd");
    return (0);

}