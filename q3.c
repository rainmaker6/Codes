#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
};
struct Node *head;
void PrintList(struct Node *n)
{
while(n!=NULL)
{
printf("\n the data is %d", n->data);
n=n->next;
}
}
void InsertAny(int item)
{
struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=item;
int loc;
printf("\n enter the location in which the node can be inserted");
scanf("%d", &loc);
struct Node *search;
search=head;
while(search!=NULL)
{
if(search->data==loc){break;}
search=search->next;
}
temp->next=search->next;
search->next=temp;
}
int main()
{
head=(struct Node*)malloc(sizeof(struct Node));
struct Node *first=(struct Node*)malloc(sizeof(struct Node));
struct Node *second=(struct Node*)malloc(sizeof(struct Node));
struct Node *third=(struct Node*)malloc(sizeof(struct Node));
head->data=10;
head->next=first;
first->data=20;
first->next=second;
second->data=30;
second->next=third;
third->data=40;
third->next=NULL;
PrintList(head);
printf("\n insertion at the specific position");
InsertAny(50);
PrintList(head);
}