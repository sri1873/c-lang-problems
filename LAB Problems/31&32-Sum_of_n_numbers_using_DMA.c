#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr,sum=0,*ptr1,sum1=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("\nUSING Malloc\n");
    printf("Enter %d numbers:",n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr == NULL)
     {
         printf("Error! memory not allocated.");
         exit(0);
     }
    for (int i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("The sum is:%d\n",sum);
    free(ptr);
    printf("\nUSING CALLOC\n");
    printf("Enter %d numbers:",n);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr1 == NULL)
     {
         printf("Error! memory not allocated.");
         exit(0);
     }
    for (int i=0;i<n;i++)
    {
        scanf("%d",ptr1+i);
        sum1+=*(ptr1+i);
    }
    printf("The sum is:%d",sum1);
    free(ptr1);

    return 0;
}
