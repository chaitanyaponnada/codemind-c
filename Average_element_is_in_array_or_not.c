#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int se;
    int c=0;
    int s=0;
    scanf("%d",&se);
    for(i=0;i<n;i++){
        s=s+a[i];
    }
    int avg;
    avg=(s/n);
    
    for(i=0;i<n;i++){
        
          if(a[i]==avg){
            c=1;
            break;
          }
    }
    if(c==0){
    printf("False");
        
    }
    else{
        printf("True");
    }
    
}