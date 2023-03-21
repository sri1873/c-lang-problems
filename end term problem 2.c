#include<stdio.h>
int main(){
int a,b,res1,res2;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    printf("\n  ARITHEMATIC OPERATIONS\n");
    printf("\nAddition of %d and %d is %d\n",a,b,a+b);
    printf("Subtraction of %d and %d is %d\n",a,b,a-b);
    printf("Multiplication of %d and %d is %d\n",a,b,a*b);
    printf("Division of %d and %d is %d\n",a,b,a/b);
    printf("Modulus of %d and %d is %d\n\n",a,b,a%b);
    printf("\n  BITWISE OPERATIONS\n");
    printf("Bitwise AND= %d\n",a&b);
    printf("Bitwise OR= %d\n",a|b);
    printf("Bitwise NOT= %d\n",!a);
    printf("Bitwise XOR= %d\n",a^b);
    printf("Bitwise Complement= %d\n",~a);
    printf("Bitwise Shift Right= %d\n",a>>3);
    printf("Bitwise Shift Left= %d\n\n",b<<3);
    printf("\n  LOGICAL OPERATIONS\n");
    res1=(a>5)&&(b<=8);
    printf("logical And=%d\n",res1);
    res2=(a==5)||(b%2==0);
    printf("Logical OR NOT = %d\n\n",res2);
    printf("\n  INCREMENT & DECREMENT\n");
    printf("Pre-Increment of a =%d\n",++a);
    printf("Post-Increment of a =%d\n",a++);
    printf("Pre-Decrement of b =%d\n",--b);
    printf("Post-Decrement of b =%d\n\n",b--);
return(0);
}
