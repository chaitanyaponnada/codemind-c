#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,n;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    n=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("%.4f",sqrt(n));
}