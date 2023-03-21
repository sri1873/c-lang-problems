#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp = fopen("dummytext.txt","r");
    if (fp == NULL)
    {
        printf("File does not Exist");
        exit(0);
    }
    else
        printf("File Exists!\n");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
    return(0);
}
