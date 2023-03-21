#include<stdio.h>
int main(){
    int amount;
    float rate,time,SI;
    printf("Enter Principal Amount: \n");
    scanf("%d",&amount);
    printf("Rate of Interest:\n");
    scanf("%f",&rate);
    printf("Time period:\n");
    scanf("%f",&time);
    SI=(amount*rate*time)/100;
    printf("Simple Interest: %.2f%%\n",SI);
    return(0);
}
