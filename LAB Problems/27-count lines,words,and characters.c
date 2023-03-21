#include<stdio.h>
#include<stdlib.h>
int main()
{
    int word=0,letters=0,lines=0;
    char str[200];
    printf("Enter a string less than 200 characters ending with #:\n");
    scanf("%[^#]", str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
            continue;
        else
            letters+=1;
    }
    for(int j=0;str[j]!='\0';j++)
    {
        if(str[j]==' ')
            word+=1;
    }
    for(int k=0;str[k]!='\0';k++)
    {
        if(str[k]=='\n')
            lines+=1;
    }
    printf("%d letters and %d words and %d lines",letters,word,lines);
    return 0;
}
