#include<stdio.h>
int main()
{
  int a,b,m,l;
  scanf("%d%d",&a,&b);
  if(a>b)
  m=a;
  else
  m=b;
  for(int i=0;i<m;i++)
  {
      if(m%a==0&&m%b==0)
      {
          l=m;
          break;
      }
      m++;
  }
  printf("%d",l);
}