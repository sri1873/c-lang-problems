#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,r,ch;
    do{
    printf("Enter the number: \n");
    scanf("%d",&n);
    printf("Enter the number of rows: \n");
    scanf("%d",&r);
    for (i=1;i<=r;i++)
    {
        printf("%dx%d=%d\n",n,i,n*i);
    }
    printf("Press 1 to do again.\nPress any other number to exit");
    scanf("%d",&ch);
    }while (ch==1);
    return(0);
}
