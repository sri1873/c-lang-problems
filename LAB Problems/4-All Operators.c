#include<stdio.h>
int main(){
int a,b,res1,res2,choice;
float m;
do{

    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    printf("Addition of %d and %d is %d",a,b,a+b);
    printf("Subtraction of %d and %d is %d\n",a,b,a-b);
    printf("Multiplication of %d and %d is %d\n",a,b,a*b);
    printf("Division of %d and %d is %d\n",a,b,a/b);
    printf("Remainder of %d and %d is %d\n\n",a,b,a%b);
    res1=(a>0)&&(b<=10);
    printf("logical And=%d\n",res1);
    res2=(a==b)||(b!=0);
    printf("Logical OR NOT = %d\n\n",res2);
    printf("Bitwise AND= %d\n",a&b);
    printf("Bitwise OR= %d\n",a|b);
    printf("Bitwise NOT= %d\n",!a);
    printf("Bitwise XOR= %d\n",a^b);
    printf("Bitwise Complement= %d\n",~a);
    printf("Bitwise Shift Right= %d\n",a>>2);
    printf("Bitwise Shift Left= %d\n\n",b<<3);
    printf("Pre-Increment=%d\n",++a);
    printf("Post-Increment=%d\n",b++);
    printf("Pre-Decrement=%d\n",--a);
    printf("Post-Decrement=%d\n\n",b--);
    printf("Conditional Expression=%d\n",(a-b>50)?100:200);
    printf("Integer Size= %d, Floating point size= %d\n\n",sizeof(a),sizeof(m));
    printf("press  0 to exit or 1 to try again\n");
    scanf("%d",&choice);
    if (choice==0)
        exit(0);
}while(choice==1);
return(0);
}
