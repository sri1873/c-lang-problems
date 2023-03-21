#include<stdio.h>
struct distance
{
    int feet;
    float inch;
}dist1,dist2,sum;
int main()
{
    printf("1st Distance\nEnter feet:");
    scanf("%d",&dist1.feet);
    printf("Enter inch:");
    scanf("%f",&dist1.inch);
    printf("2st Distance\nEnter feet:");
    scanf("%d",&dist2.feet);
    printf("Enter inch:");
    scanf("%f",&dist2.inch);
    sum.feet=dist1.feet+dist2.feet;
    sum.inch=dist1.inch+dist2.inch;
    while(sum.inch>=12)
    {
        ++sum.feet;
        sum.inch-=12;
    }
    printf("Sum of distances = %d\'-%.1f\"", sum.feet, sum.inch);
    return 0;
}
