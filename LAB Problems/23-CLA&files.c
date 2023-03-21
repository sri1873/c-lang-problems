#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc,char* argv[])
{
    FILE *f1;
    char ch,f[100],c;
    int ct=0;
    if(argc!=2)
    {
        printf("min 2 arguments required");
        exit(0);
    }
    c= *argv[1];
    f1=fopen("dummytext.txt","r");
    if (!f1)
    {
        printf("Error opening file");
        exit(0);
    }
    do
    {
        ch=fgetc(f1);
        if(c==ch)
            ++c;
    }while(ch !=EOF);
    fclose(f1);
    printf("\nTotal occurences of %c in given file are: %d",c,ct);
    return 0;
}
