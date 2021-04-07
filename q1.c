#include <stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
};
//add at front
void add_front(struct Node *n,int value)
{
struct Node *zero=(struct Node*)malloc(sizeof(struct Node));
zero->data=value;
zero->next=(*head);
while()
}
//adding at the end
void add_end(struct Node *n,int value)
{
struct Node *third=(struct Node*)malloc(sizeof(struct Node));
third->data=value;
third->next=NULL;

while(last->next!=NULL)
{
last=last->next;
}
last->next=third;
}
//adding after nth node
void add_anywhere(struct Node *n,int value)
{
//insert after n
struct Node *dandling=(struct Node*)malloc(sizeof(struct Node));
dandling->data=value;
dandling->next=n->next;
n->next=dandling;
}

int main()
{
struct Node *head=(struct Node*)malloc(sizeof(struct Node));
struct Node *first=(struct Node*)malloc(sizeof(struct Node));
struct Node *second=(struct Node*)malloc(sizeof(struct Node));
head->data=10;
head->next=first;
first->data=20;
first->next=second;
second->data=30;
second->next=NULL;
//printf("Hello World");
PrintList(head);
add_front(zero,75);
add_end(second,60);
add_anywhere(second,66);//adding after second
return 0;
}
