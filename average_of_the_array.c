#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    float avg;
    avg=(float)sum/(float)n;
    printf("%.2f",avg);
}