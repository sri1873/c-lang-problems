#include<stdio.h>
int main(){
    int n,i,choice=1;
    while (choice==1)
    {
        int flag=0;
        printf("Enter a Natural number: ");
        scanf("%d",&n);
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
                {
                flag++;
                break;
                }
        }
        if (n==1)
            printf("1 is neither prime nor a composite number\nPlease Try Again\n");
        else if(flag==0)
            printf("%d is a prime number\n",n);
        else
            printf("%d is not a prime number\n",n);
        printf("To Try again Press 1\nPress any other number to Exit\n");
        scanf("%d",&choice);
    }
    return(0);
}
