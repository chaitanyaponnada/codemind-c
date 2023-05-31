
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int s=0;
    int o=0;
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2!=0){
            s=s+a[i];
        }
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            o=o+a[i];
        }
    }
    int x;
    x=o-s;
    if(x<0){
        printf("%d",-x);
    }
    else{
        printf("%d",x);
    }
    
}