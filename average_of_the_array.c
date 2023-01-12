#include<stdio.h>
int main()
{
    int n,s=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       
        s=s+a[i];
    }
    float avg;
    avg=(float)s/(float)n;
    printf("%.2f",avg);
}