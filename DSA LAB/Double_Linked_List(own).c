#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
}temp,temp1,ptr,head,temp2;
int count=0;
void create()
{
    ptr=(struct node *) malloc(sizeof(struct node));
    ptr->prev=NULL;
    ptr->next=NULL;
    printf("\nEnter data:");
    scanf("%d",&ptr->data);
    count++;
}
void display();
{
    temp=head;
    printf("The values are:");
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
}
void insert_begin()
{
    if(head==NULL)
    {
        create();
        head=ptr;
        display();
    }
    else
    {
        create();
        head->prev=ptr;
        ptr->next=head;
        head=ptr;
        display();
    }
}
void insert_end()
{
    if(head==NULL)
    {
        create();
        head=ptr;
        display();
    }
    temp=head;
    create();
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->prev=temp;
    display();
}
void insert_pos()
{
    int pos;
    printf("\nEnter position to insert value:");
    scanf("%d",&pos);
    if(pos<1 || pos>count)
        printf("Index out of range");
    if((h==NULL)&&(pos!=1))
    {
        printf("\nEmpty list cannot insert more that 1st position");
        return;
    }
    if((h==NULL)&&(pos==1))
        insert_begin();
    else
    {
        temp=head;
        while(pos>1)
        {
            create();
            temp=temp->next;
        }
        ptr->next=temp->next;
        temp->next->prev=ptr;
        temp->next=ptr;
        ptr->prev=temp;
    }
}
void del_begin()
{
    if(head==NULL)
        printf("List empty");
    else if (head->next==NULL)
    {
        free(head);
        count--;
        head=NULL;
    }
    else
    {
        temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        free(temp);
        temp=NULL;
        count--;
    }
}
void del_last()
{
    if(head==NULL)
        printf("List empty");
    else if (head->next==NULL)
    {
        free(head);
        count--;
        head=NULL;
    }
    else
    {
        temp=temp1=head;
        while(temp->next!=NULL)
        {
            temp1=temp;
            temp=temp->next;
        }
        temp1->next=NULL;
        temp->prev=NULL;
        free(temp);
        temp=NULL;
    }
}
void del_pos()
{
    int pos;
    printf("\nEnter position to delete:")
}
