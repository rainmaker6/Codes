#include <stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
};
struct Node *head;
void InsertBeginig(int real)
{
struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
temp->data=real;
temp->next=head;
head=temp;
}
void InsertAny(int item)
{
struct Node *temp=(struct Node)malloc(sizeof(struct Node));
temp->data=item;
int loc;
printf("Enter the location:");
scanf("%d",&loc);
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

void printList(struct Node *n)
{
while(n!=NULL)
{
printf("\n the data is%d", n->data);
n=n->next;
}

}
int main()
{
head=(struct Node*)malloc(sizeof(struct Node));
struct Node *first=(struct Node*)malloc(sizeof(struct Node));
struct Node *second=(struct Node*)malloc(sizeof(struct Node));
head->data=10;
head->next=first;
first->data=20;
first->next=second;
second->data=30;
second->next=NULL;
printList(head);
printf("\n");
InsertBeginig(40);
printList(head);
InsertAny(50);
return 0;
}