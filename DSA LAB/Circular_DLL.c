#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *next;
    struct node *prev;
};
typedef struct node n;

n* create_node(int);
void add_node();
void insert_at_first();
void insert_at_end();
void insert_at_position();
void delete_node_position();
void sort_list();
void update();
void search();
void display_from_beg();
void display_in_rev();

n *new, *ptr, *prev;
n *first = NULL, *last = NULL;
int number = 0;

void main()
{
    int ch;

    printf("\nCircular Doubly Linked List Operations: \n");
    printf("1.Insert at beginning \n2.Insert at end\n3.Insert at position\n5.Delete node at position\n6.Update Node Value\n7.Search element \n8.Display List\n9.Exit");

    while (1)
    {

        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1 :
            insert_at_first();
            break;
        case 2 :
            insert_at_end();
            break;
        case 3 :
            insert_at_position();
            break;
        case 5 :
            delete_node_position();
            break;
        case 6 :
            update();
            break;
        case 7 :
            search();
            break;
        case 8 :
            display_from_beg();
            break;
        case 9 :
            exit(0);
        case 11 :
            add_node();
            break;
        default:
            printf("\ninvalid choice");
        }
    }
}

n* create_node(int info)
{
    number++;
    new = (n *)malloc(sizeof(n));
    new->val = info;
    new->next = NULL;
    new->prev = NULL;
    return new;
}

void add_node()
{

    int info;

    printf("\nEnter the value to add: ");
    scanf("%d", &info);
    new = create_node(info);

    if (first == last && first == NULL)
    {

        first = last = new;
        first->next = last->next = NULL;
        first->prev = last->prev = NULL;
    }
    else
    {
        last->next = new;
        new->prev = last;
        last = new;
        last->next = first;
        first->prev = last;
    }
}

void insert_at_first()
{

    int info;

    printf("\nEnter the value to be inserted: ");
    scanf("%d",&info);
    new = create_node(info);

    if (first == last && first == NULL)
    {
        printf("\nNODE Inserted");
        first = last = new;
        first->next = last->next = NULL;
        first->prev = last->prev = NULL;
    }
    else
    {
        new->next = first;
        first->prev = new;
        first = new;
        first->prev = last;
        last->next = first;
        printf("\nNODE Inserted");
    }
}

void insert_at_end()
{

    int info;

    printf("\nEnter the value to insert: ");
    scanf("%d", &info);
    new = create_node(info);

    if (first == last && first == NULL)
    {
        printf("\nNODE Inserted");
        first = last = new;
        first->next = last->next = NULL;
        first->prev = last->prev = NULL;
    }
    else
    {
        last->next = new;
        new->prev = last;
        last = new;
        first->prev = last;
        last->next = first;
    }
}

void insert_at_position()
{
    int info, pos, len = 0, i;
    n *prevnode;

    printf("\nEnter the value to insert: ");
    scanf("%d", &info);
    printf("\nEnter the position: ");
    scanf("%d", &pos);
    new = create_node(info);

    if (first == last && first == NULL)
    {
        if (pos == 1)
        {
            first = last = new;
            first->next = last->next = NULL;
            first->prev = last->prev = NULL;
        }
        else
            printf("\nList Empty");
    }
    else
    {
        if (number < pos)
            printf("\nLimit Exceeded");

        else
        {
            for (ptr = first, i = 1;i <= number;i++)
            {
                prevnode = ptr;
                ptr = ptr->next;
                if (i == pos-1)
                {
                    prevnode->next = new;
                    new->prev = prevnode;
                    new->next = ptr;
                    ptr->prev = new;
                    printf("\nNode inserted at position %d successfully!", pos);
                    break;
                }
            }
        }
    }
}


void delete_node_position()
{
    int pos, count = 0, i;
    n *temp, *prevnode;


    if (first == last && first == NULL)
        printf("\nEmpty list");

    else
    {
        printf("\nEnter the position to delete: ");
        scanf("%d", &pos);
        if (number < pos)
            printf("\nLimit Exceeded");

        else
        {
            for (ptr = first,i = 1;i <= number;i++)
            {
                prevnode = ptr;
                ptr = ptr->next;
                if (pos == 1)
                {
                    number--;
                    last->next = prevnode->next;
                    ptr->prev = prevnode->prev;
                    first = ptr;
                    printf("%d is deleted", prevnode->val);
                    free(prevnode);
                    break;
                }
                else if (i == pos - 1)
                {
                    number--;
                    prevnode->next = ptr->next;
                    ptr->next->prev = prevnode;
                    printf("%d is deleted", ptr->val);
                    free(ptr);
                    break;
                }
            }
        }
    }
}

void update()
{
    int oldval, newval, i, f = 0;
    printf("\nEnter the old value: ");
    scanf("%d", &oldval);
    printf("\nEnter the new value: ");
    scanf("%d", &newval);
    if (first == last && first == NULL)
        printf("\nList empty!");
    else
    {
        for (ptr = first, i = 0;i < number;ptr = ptr->next,i++)
        {
            if (ptr->val == oldval)
            {
                ptr->val = newval;
                printf("Value updated to %d", ptr->val);
                f = 1;
            }
        }
        if (f == 0)
            printf("\nNo value found to update");
    }
}

void search()
{
    int count = 0, key, i, f = 0;

    printf("\nEnter value to search: ");
    scanf("%d", &key);

    if (first == last && first == NULL)
        printf("\nList empty");
    else
    {
        for (ptr = first,i = 0;i < number;i++,ptr = ptr->next)
        {
            count++;
            if (ptr->val == key)
            {
                printf("\nFound value at position at %d", count);
                f = 1;
            }
        }
        if (f == 0)
            printf("\nValue not found");
    }
}

void display_from_beg()
{
    int i;
    if (first == last && first == NULL)
        printf("\nList empty");
    else
    {
        for (ptr = first, i = 0;i < number;i++,ptr = ptr->next)
            printf("%d\t", ptr->val);
    }
}
