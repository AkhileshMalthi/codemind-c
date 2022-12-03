#include<stdio.h>
int main() {
    int n,a,b;
    scanf("%d",&n);
    if (n%5==0 && n%10==0) {
        printf("%d",n/10);
    
    } else if (n%5==0) {
        a=n%10;
        printf("%d",(a/5)+(n/10));
    } else {
        printf("-1");
    }  
    return 0;
}