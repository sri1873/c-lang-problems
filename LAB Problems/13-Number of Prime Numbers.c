#include<stdio.h>
int main()
{
    int num,n,j,i,flag,choice;
    do
    {
       printf("Enter the value of n");
        scanf("%d",&n);
        for(j=2;j<=n;j++)
        {
            flag=0;
            for(i=2;i<=j/2;i++)
            {
                if(j%i==0)
                    {
                    flag++;
                    }
            }
            if (flag==0)
                printf("%d\t",j);
        }
        printf("\nTo Try Again Press 1\nTo Exit Press 0");
        scanf("%d",&choice);
    }while(choice==1);
    return 0;
}
