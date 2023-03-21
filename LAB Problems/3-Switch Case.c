#include<stdio.h>
#include<stdlib.h>
int main()
{
do{
int a,b,c;
char o;
printf("enter 2 numbers:- ");
scanf("%d%d",&a,&b);
    printf("Press:\n");
    printf("+ for Addition\n");
    printf("- for Subtraction\n");
    printf("* for Multiplication\n");
    printf("/ for Division\n");
    printf("%% for Remainder\n");
    printf("E to exit\n");
    getchar();
    o=getchar();
    if (o=='e'||o=='E')
        exit(0);
    switch(o)
{
    case '+':printf("Performing Addition to your numbers\n");
        c=a+b;
        printf("%d is your answer\n",c);
        break;
    case '-':printf("Performing Subtraction to your numbers\n");
        c=a-b;
        printf("%d is your answer\n",c);
        break;
    case '*':printf("Performing Multiplication to your numbers\n");
        c=a*b;
        printf("%d is your answer\n",c);
        break;
    case '/':printf("Performing Division to your numbers\n");
        c=a/b;
        printf("%d is your answer\n",c);
        break;
    case '%':printf("dividing the numbers\n");
        c=a%b;
        printf("%d is your answer\n",c);
        break;
    default:printf("invalid operator\n");
}
}while(1);
return(0);
}
