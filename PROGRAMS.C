#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
 int data;
 struct Node* next;
};
 struct Node* insert_at_beginning(struct Node* head,int data)
 {
  struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=data;
  newNode->next=head;
  head=newNode;
  return head;
 }
 struct Node*insert_at_end(struct Node*head,int data)
 {
  struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
  struct Node*temp;
  newNode->data=data;
  newNode->next=NULL;
  if(head==NULL)
  {
   return newNode;
  }
  temp=head;
  while(temp->next!=NULL)
  {
   temp=temp->next;
  }
  temp->next=newNode;
  return head;
  }
  struct Node*delete_node(struct Node*head,int data)
  {
   struct Node*temp=head;
   struct Node*prev=NULL;
   if(head==NULL)
   {
    printf("List is empty.");
    return head;
   }

   if(temp!=NULL&&temp->data==data)
   {
    head=temp->next;
    free(temp);
    return head;
   }
   while(temp!=NULL&&temp->data!=data)
   {
    prev=temp;
    temp=temp->next;
   }
   if(temp==NULL)
   {
    printf("Element not found\n");
    return head;
   }
   prev->next=temp->next;
   free(temp);
   return head;
  }
  void traverse(struct Node*head)
  {
   struct Node*temp=head;
   if(temp==NULL)
   {
    printf("List is empty.\n");
    return;
   }
   printf("Linked List:");
   while(temp!=NULL)
   {
    printf("%d->",temp->data);
    temp=temp->next;
   }
   printf("NULL\n");
   }
   void main()
   {
    struct Node*head=NULL;
    clrscr();
    head=insert_at_beginning(head,10);
    head=insert_at_beginning(head,20);
    head=insert_at_end(head,30);
    head=insert_at_end(head,40);
    traverse(head);
    head=delete_node(head,20);
    traverse(head);
    getch();
   }

