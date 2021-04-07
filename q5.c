#include <stdio.h>
#include<stdlib.h>
struct Node
{
    struct Node *left;
    int data;
    struct Node *right;
 
};
struct Node *root;
int main()
{
    root=(struct Node*)malloc(sizeof(struct Node));
    struct Node *first=(struct Node*)malloc(sizeof(struct Node));
    struct Node *second=(struct Node*)malloc(sizeof(struct Node));
    struct Node *third=(struct Node*)malloc(sizeof(struct Node));
    struct Node *fourth=(struct Node*)malloc(sizeof(struct Node));
    root->data=50;
    root->left=first;
    root->right=second;
    first->data=5;
    second->data=80;
    root->left->left=third;
    root->right->right=fourth;
    third->left=NULL;
    third->right=NULL;
    fourth->left=NULL;
    fourth->right=NULL;
    printf("Hello World");

 

    return 0;
}