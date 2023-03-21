#include<stdio.h>
#include<string.h>
int main()
{
int num1,num2,result;
char operator;
printf("Please enter the first integer\n");
scanf("%d",&num1);
printf("Please enter the second integer\n");
scanf("%d",&num2);
    printf("Press:\n");
    printf("+ for Addition\n");
    printf("- for Subtraction\n");
    printf("* for Multiplication\n");
    printf("/ for Division\n");
    printf("%% for Remainder\n");
    getchar();
    operator=getchar();
    switch(operator)
{
    case '+':
        printf("Adding your numbers\n");
        result=num1+num2;
        printf("%d+%d=%d\n",num1,num2,result);
        break;
    case '-':
        printf("subtracting your numbers\n");
        result=num1-num2;
        printf("%d-%d=%d\n",num1,num2,result);
        break;
    case '*':
        printf("Multiplying your numbers\n");
        result=num1*num2;
        printf("%d*%d=%d\n",num1,num2,result);
        break;
    case '/':
        printf("Dividing your numbers\n");
        result=num1/num2;
        printf("%d/%d=%d\n",num1,num2,result);
        break;
    case '%':
        printf("Remainder of your numbers\n");
        result=num1%num2;
        printf("%d%%%d=%d\n",num1,num2,result);
        break;
    default:
        printf("invalid operator\n");
}
return(0);
}
