#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int n;
    struct node *next;
}*h,*temp,*temp1,*temp2,*temp4;

void insert1 ();
void insert2 ();
void insert3();
void traversebeg();
void sort();
void del();
void search();
void update();
int count=0;
void main ()
{
    int choice =0;
    h=temp=temp1=NULL;
    printf("\nMain Menu\n");
        printf("\nChoose one option from the following list.\n");
        printf("\n1.Insert in begining\n2.Insert at last\n3.Insert at a position\n4.Delete node at a location\n5.Display from beginning\n6.Search for an element\n7.Update a value\n8.Exit\n");
    while(choice != 9)
    {
        printf("\nEnter your choice? ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            		insert1();
            		break;
            case 2:
            		insert2();
            		break;
            case 3:
            		insert3();
            		break;
            case 4:
            		del();
            		break;
            case 5:
            		traversebeg();
            		break;
            case 6:
            		search();
            		break;
            case 7:
                    update();
                    break;
            case 8:
            		exit(0);
            		break;
            default:
            		printf("Please enter valid choice..");
        }
    }
}
void create()
{
        int data;
        temp=(struct node*)malloc(sizeof(struct node));
        temp->prev=NULL;
        temp->next=NULL;
        printf("\nEnter value of node: ");
        scanf("%d",&data);
        temp->n=data;
        count++;
}
void insert1()
{
    if(h==NULL)
    {
        create();
        h=temp;
        temp1=h;
    }
    else
    {
        create();
        temp->next=h;
        h->prev=temp;
        h=temp;
    }
}
void insert2()
{
    if(h==NULL)
    {
        create();
        h=temp;
        temp1=h;
    }
    else
    {
        create();
        temp1->next=temp;
        temp->prev=temp1;
        temp1=temp;
    }
}
void insert3()
{
    int pos,i=2;
    printf("\nEnter position to be inserted: ");
    scanf("%d",&pos);
    temp2=h;
    if((pos<1)||(pos>=count+1))
    {
        printf("\nPosition out of range to insert");
        return;
    }
    if((h==NULL)&&(pos!=1))
    {
        printf("\nEmpty list cannot insert more that 1st position");
        return;
    }
    if((h==NULL)&&(pos==1))
    {
        create();
        h=temp;
        temp1=h;
        return;
    }
    else{
        while(i<pos)
        {
            temp2=temp2->next;
            i++;
        }
        create();
        temp->prev=temp2;
        temp->next=temp2->next;
        temp2->next->prev=temp;
        temp2->next=temp;
    }
}
void del()
{
    int pos;
    printf("Enter Position to Delete: ");
    scanf("%d", &pos);
    temp4 = h;
    while(pos>1){
        temp4 = temp4->next;
        pos--;
    }
    if((pos<1)||(pos>=count+1))
    {
        printf("\nError:Position out of range to delete");
        return;
    }
    if(h==NULL)
    {
        printf("\nError: Empty list no elements to delete");
        return;
    }
    if(temp4->next==NULL)
    {
        temp4->prev->next = NULL;
        temp4->prev = NULL;
        free(temp4);
        temp4 = NULL;
        printf("Node Deleted");
        count--;
        return;
    }
    else{
        temp4->prev->next = temp4->next;
        temp4->next->prev = temp4->prev;
        free(temp4);
        temp4 = NULL;
        printf("Node Deleted");
        count--;
        return;
    }
}
void traversebeg()
{
    temp2=h;
    if(temp2==NULL)
    {
        printf("List empty to display\n");
        return;
    }
    printf("\nLinked list element from beginning:");
    while(temp2->next!=NULL)
    {
        printf("%d ",temp2->n);
        temp2=temp2->next;
    }printf("%d ", temp2->n);
}
void search()
{
    int data,count=0,flag=0;
    temp2=h;
    if(temp2==NULL)
    {
        printf("\nError:List Empty to search for data");
        return;
    }
    printf("\nEnter value to search:");
    scanf("%d",&data);
    while(temp2!=NULL)
    {
        if(temp2->n==data)
        {
            printf("\nData found in %d position",count+1);
            flag=1;
            return;
        }
        else{
            temp2=temp2->next;
            count++;
            flag=0;
        }
    }if(flag==0)
        printf("\nError:%d not found in list",data);
}
void update()
{
    int data,data1;
    printf("\nEnter node data to be updated ");
    scanf("%d",&data);
    printf("\nEnter new data: ");
    scanf("%d",&data1);
    temp2=h;
    if(temp2==NULL)
    {
        printf("\nError:List empty no node to update");
        return;
    }
    while(temp2!=NULL){
        if(temp2->n==data)
        {
            temp2->n=data1;
            return;
        }
        else
            temp2=temp2->next;
    }
    printf("\n%d not in list",data);
}
