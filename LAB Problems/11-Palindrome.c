#include<stdio.h>
int main()
{
    long num,temp,digit,choice;
    do
    {
    long sum=0,reverse=0;
    printf("Enter any positive Integer: ");
    scanf("%ld",&num);
    temp=num;
    while(num>0)
    {
        digit=num%10;
        reverse=(reverse*10)+digit;
        sum=sum+digit;
        num/=10;
    }
    printf("The given number is : %ld\n",temp);
    printf("The sum of digits of %ld = %ld\n",temp,sum);
    if (reverse==temp)
        printf("Given number is a Palindrome\n");
    else
        printf("The number is not a Palindrome\n");
    printf("To try again press 1\nTo Exit press 0\n");
    scanf("%d",&choice);
    }while(choice==1);
    return 0;
}
