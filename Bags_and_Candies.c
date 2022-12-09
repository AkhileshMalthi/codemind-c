#include<stdio.h>
int main() {
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    int a=k*m,b=n%a;
    if (b==0 && a<=n) {
        printf("%d",n/a);
    } else if (b>0 && a<n) {
        printf("%d",(n/a)+1);
    } else if (n<a) {
        printf("%d",1);
    }
    return 0;
}