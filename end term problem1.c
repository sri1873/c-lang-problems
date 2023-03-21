#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int num,sum=0,reverse=0,digit;
    printf("Enter a number:");
    scanf("%d",&num);
    int temp=num;
    while(num>0)
    {
        digit=(num%10);
        reverse=(reverse*10)+digit;
        sum+=digit;
        num=num/10;
    }
    printf("The given number is : %d\n",temp);
    printf("The sum of digits of %d = %d\n",temp,sum);
    if (reverse==temp)
        printf("Given number is a Palindrome\n");
    else
        printf("The number is not a Palindrome\n");

    return 0;
}
