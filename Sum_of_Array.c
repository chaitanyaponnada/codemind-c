#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int s=0;
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        
            s=s+a[i];
    }
    printf("%d",s);
}
