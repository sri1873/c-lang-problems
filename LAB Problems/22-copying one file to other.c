#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
    FILE *fp1, *fp2;
    char fn1[30], fn2[30], ch;
    printf("Enter the source file:");
    gets(fn1);
    fp1 = fopen(fn1,"r");
    printf("Enter the destination file:");
    gets(fn2);
    fp2 = fopen(fn2,"w");
    if ((fp1 == NULL) || (fp2 == NULL))
    {
        puts("THE FILE DOES NOT EXIST");
        exit(0);
    }
    while ((ch = fgetc(fp1)) != EOF)
    {
        ch = toupper(ch);
        fputc(ch,fp2);
    }
    printf("File successfully copied");
    fclose(fp1);
    fclose(fp2);
    return 0;

}
