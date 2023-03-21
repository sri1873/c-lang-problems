#include<stdio.h>
int main()
{
    int i,r,j,c;
    do{
        printf("Enter number of rows:");
        scanf("%d",&r);
        for(i=1;i<=r;i++)
        {
            for(j=1;j<=i;j++)
                {
                    printf("%d ",j);
                }
        printf("\n");
        }
            for(i=1;i<=r;i++)
        {
            for(j=1;j<=i;j++)
                {
                    printf("*");
                }
        printf("\n");
        }
        printf("To Try Again Press 1\nTo Exit Press any other number ");
        scanf("%d",&c);
    }while(c==1);
    return(0);
}
