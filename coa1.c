#include<stdio.h>
int main()
{
    float internal[5],external[5],cumulative[5];
    for (int i=0;i<5;i++){
        printf("Enter internal marks of subject %d",i+1);
        scanf("%f",&internal[i]);
        printf("Enter external marks of subject %d",i+1);
        scanf("%f",&external[i]);
        cumulative[i]=(internal[i]+external[i]);
    }
    int internal_per[5],external_per[5];
    for(int i=0;i<5;i++){
        internal_per[i]=(internal[i]/60)*100;
        external_per[i]=(external[i]/40)*100;
    }
}

