#include<stdio.h>
#include<stdlib.h>
int mutex=1,write=5,readcount=0;
void wait(int s)
{
    if (s>0)
        s--;
}
void signal(int s)
{
    s++;
}
int main()
{
do {
    wait(write);
    signal(write);
}while(1);
do {
    wait(mutex);
    readcount++;
    if (readcount==1)
        wait(write);
    signal(mutex);
    wait(mutex);
    readcount--;
    if (readcount == 0)
        signal(write);
    signal(mutex);
} while(1);
return 0;
}
