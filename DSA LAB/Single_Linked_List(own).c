#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head,*temp1,*temp,*ptr;
int count=0;
void create()
{
    ptr=(struct node *)malloc(sizeof(struct node *));
    ptr->next=NULL;
    printf("Enter data:");
    scanf("%d",&ptr->data);
    count++;
}
void display()
{
    if(head==NULL)
        printf("LIST EMPTY\n");
    else
    {
        temp=head;
        printf("The values are:");
        while(temp!=NULL)
        {
            printf(" %d",temp->data);
            temp=temp->next;
        }
    }

}
void begin_insert()
{
    create();
    ptr->next=head;
    head=ptr;
    printf("Node Inserted\n");
    display();
}
void end_insert()
{
    if(head==NULL)
    {
        create();
        head=ptr;
        printf("Node Inserted\n");
        display();
    }
    else
    {
        create();
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        printf("Node Inserted\n");
        display();
    }
}
void pos_insert()
{
    int pos;
    temp=head;
    printf("Enter position to add:");
    scanf("%d",&pos);
    if (pos<1 || count<pos)
        printf("Out of range\n");
    else
    {
        create();
        while(pos>1)
        {
            temp=temp->next;
            pos--;
        }
        ptr->next=temp->next;
        temp->next=ptr;
        printf("Node Inserted\n");
        display();
    }
}
void del_begin()
{
    if(head == NULL)
    {
        printf("\nList is empty\n");
    }
    else
    {
        temp=head;
        head=head->next;
        free(temp);
        temp=NULL;
        printf("Node deleted\n");
        display();
        count--;
    }
}
void del_end()
{
    temp=temp1=head;
    if(head == NULL)
    {
        printf("\nList is empty\n");
    }
    else if(head->next==NULL)
    {
        free(head);
        head=NULL;
        count--;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp1=temp;
            temp=temp->next;
            printf("%d",temp->data);
        }
        temp1->next=NULL;
        free(temp);
        printf("Node deleted\n");
        display();
        count--;
    }
}
void del_pos()
{
    int pos;
    temp=temp1=head;
    printf("Enter position to delete:");
    scanf("%d",&pos);
    if(pos<1 || count<pos)
        printf("Position out of range\n");
    else
    {
            while(pos>0)
        {
            temp1=temp;
            temp=temp->next;
            pos--;
        }
        temp1->next=temp->next;
        free(temp);
        temp=NULL;
        printf("Node deleted\n");
        display();
    }
}
void search()
{
    int to_search,i=1,flag=0;
    printf("enter data to search:");
    scanf("%d",&to_search);
    temp=head;
    while(temp!=NULL)
    {
        if(temp->data==to_search)
        {
            printf("Data found in position %d\n",i);
            flag=1;
            temp=temp->next;
        }
        else
        {
            i++;
            temp=temp->next;
        }
    }
    if(flag==0)
        printf("Data not found\n");
}
void main()
{
    head=temp=temp1=NULL;
    int ch=0;
    printf("Pick an Option:\n\n1.Insert At Beginning\n2.Insert At End\n3.Insert At Position\n4.Delete At Beginning\n5.Delete At End\n6.Delete At Position\n7.Search\n8.Display\n9.Exit\n");
    while(ch!=9)
    {
        printf("\nEnter you choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                begin_insert();
                break;
            case 2:
                end_insert();
                break;
            case 3:
                pos_insert();
                break;
            case 4:
                del_begin();
                break;
            case 5:
                del_end();
                break;
            case 6:
                del_pos();
                break;
            case 7:
                search();
                break;
            case 8:
                display();
                break;
            case 9:
                exit(0);
            default:
                printf("Enter a valid option");
        }
    }
}
