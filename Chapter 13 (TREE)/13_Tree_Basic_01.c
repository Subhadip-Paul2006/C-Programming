#include <stdio.h>
#include <malloc.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

void main(){
    struct node *p1;
    p1 = (struct node *) malloc(sizeof(struct node));
    p1 -> right = NULL; 
    p1 -> left = NULL;

    struct node *p2;
    p2 = (struct node *) malloc(sizeof(struct node));
    p2 -> right = NULL;
    p2 -> left = NULL;

    struct node *p3;
    p3 = (struct node *) malloc(sizeof(struct node));
    p3 -> right = NULL;
    p3 -> left = NULL;`

    p1 -> left = p2;
    p1 -> right = p3;
}