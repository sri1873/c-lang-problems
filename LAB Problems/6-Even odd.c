#include<stdio.h>
int main(){
int times,a,i=0;
printf("How many times do you want  to run:\n");
scanf("%d",&times);
do{
printf("Enter Your Number:\n");
scanf("%d",&a);
if (a%2==0)
    printf("Its Even\n");
else
    printf("Its Odd\n");
i+=1;
}while(i<times);
return(0);
}
