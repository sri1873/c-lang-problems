#include <stdio.h>
int main()
{
    int block_size={100,200,300,400,500},process_size={50,63,890,123,4},flags[10],all[10],i,j;
    for (i = 0; i < 10; i++)
    {
        flags[i] = 0;
        all[i] = -1;
    }
    printf("\nBlock no.\tsize\t\t process no.\t\tsize");
    for (i = 0; i < 5; i++)
    {
        printf("\n%d\t\t%d\t\t",i + 1, block_size[i]);
        if (flags[i] == 1)
        {
            printf("%d\t\t\t%d", all[i]+ 1, b[all[i]]);
        }
        else
            printf("Not allocated");
    }
    printf("\n");
    return 0;
}
