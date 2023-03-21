#include<stdio.h>
#include<stdlib.h>
int stack[100],top=-1,choice,size;
int isempty()
{
    if(top==-1)return 1;
    else return 0;
}
int isfull()
{
    if (top==size) return 1;
    else return 0;
}
int push_arr()
{
    int data;
    printf("Enter value to push:");scanf("%d",&data);
    if(!isfull())
    {
        top=top+1;
        stack[top]=data;
    }
    else printf("Stack is Full\n");
}
int pop_arr()
{
    int data;
    if(!isempty())
    {
        data = stack[top];
        top = top - 1;
        printf("%d was popped\n",data);
    }
    else printf("Could not retrieve data, Stack is empty.\n");
}
void show()
{
    for (int i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    if(top == -1)
    {
        printf("Stack is empty");
    }
}
struct node
{
        int val;
        struct node *next;
}*head;
void push_ll()
{
    struct node*ptr = (struct node*)malloc(sizeof(struct node));
    if(ptr == NULL)printf("not able to push the element");
    else
    {
            printf("Enter value:");
            scanf("%d",&ptr->val);
            if (head==NULL)
            {
                ptr->next=NULL;
                head=ptr;
            }
            else{
                ptr->next=head;
                head=ptr;
            }
            printf("Item Pushed\n");
    }
}
void pop_ll()
{
    struct node *ptr;
    if(head==NULL)printf("Underflow\n");
    else
    {
        printf("%d Popped\n",head->val);
        ptr=head;
        head=head->next;
        free(ptr);

    }
}
void display()
{
    struct node *ptr;
    ptr=head;
    if(ptr == NULL) printf("Stack is empty\n");
    else
    {
        printf("Printing Stack elements \n");
        while(ptr!=NULL)
        {
            printf("%d\n",ptr->val);
            ptr = ptr->next;
        }
    }
}
void main()
{
    printf("Enter stack size for Array Method:");scanf("%d",&size);
    size-=1;
    printf("\nStack using Arrays\nChoose one from the below options\n\t1.Push\n\t2.Pop\n\t3.Display\n\t4.Exit");
    printf("\nStack operations using linked list\nChoose one from the below options:\n\t5.Push\n\t6.Pop\n\t7.Show\n");
    while(choice!=4)
    {
        printf("Enter your choice:");scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push_arr();break;
        case 2:
            pop_arr();break;
        case 3:
            show();break;
        case 4:
            exit(0);break;
        case 5:
            push_ll();break;
        case 6:
            pop_ll();break;
        case 7:
            display();break;
        default:
            printf("enter valid option");
        }
    }
}
