#include <stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
};
struct Node *head;
void PrintLikedList(struct Node *n)
{
while(n!=NULL)
{
printf("\n data in the linklis is %d", n->data);
n=n->next;
}
}
void DeleteNode()
{
int loc;
printf("\n enter the loc for the deletion");
scanf("%d", &loc);
struct Node *prev, *current;
current=head;
while(current!=NULL)
{
if(current->data==loc){break;}
prev=current;
current=current->next;
}
prev->next=current->next;
free(current);
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
PrintLikedList(head);
printf("\nHello World");
DeleteNode();
PrintLikedList(head);
return 0;
}
