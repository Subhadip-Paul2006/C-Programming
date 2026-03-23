#include <stdio.h>
#include <malloc.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node* Create_Node( int data){
    struct node *n;
    n = (struct node *) malloc( sizeof( struct node));
    n -> data = 2;
    n -> left = NULL;
    n -> right = NULL;
    return n;
}
dwreg
void main(){
    struct node *p1 = Create_Node(2);
    struct node *p2 = Create_Node(1);
    struct node *p3 = Create_Node(4);

    p1 -> left = p2;
    p1 -> right = p3;
}