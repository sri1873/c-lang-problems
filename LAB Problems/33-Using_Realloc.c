#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,n1,n2;
    printf("ENTER SIZE: ");
    scanf("%d",&n1);
    ptr=(int*)malloc(n1*sizeof(int));
    printf("Address of previously allocated memory:\n");
    for (int i=0;i<n1;i++)
    {
        printf("%u\n",ptr+i);
    }
    printf("Enter new size:");
    scanf("%d",&n2);
    ptr=realloc(ptr,n2*sizeof(int));
    printf("Address of previously allocated memory:\n");
    for (int i=0;i<n2;i++)
    {
        printf("%u\n",ptr+i);
    }
    free(ptr);
    return 0;
}
