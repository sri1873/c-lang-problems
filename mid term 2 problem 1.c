#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char ch,S[50];
    char *res;
    printf("Enter the sentence in which you want to search\n");
    gets(S);
    printf("Enter the letter you want to search: ");
    scanf("%c",&ch);
    res=strchr(S,ch);
    if(res)
        printf("\n\'%c\' is in position %d in the entered string\n",ch,res-S+1);
    else
        printf("-1");
    return 0;
}
