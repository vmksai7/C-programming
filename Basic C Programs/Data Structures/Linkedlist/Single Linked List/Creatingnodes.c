/*******************************************************************************
C Program to create nodes in a single linked list
******************************************************************************/
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *adddata(struct node *head,int val)
{
    struct node *new = malloc(sizeof(struct node));
    
    new->data = val;
    new->link = NULL;
    
    struct node *ptr;
    ptr = head;
    
    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    
    ptr->link = new;
    return head;
}

void print(struct node *head)
{
    struct node *ptr;
    ptr = head;
    while(ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
}

int main()
{
    struct node *head = malloc(sizeof(struct node));
    
    head->data = 20;
    head->link = NULL;
    
    adddata(head,30);
    adddata(head,40);
  
    print(head);
}
