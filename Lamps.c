#include<stdio.h>
int main() {
    int n,k,x,y;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    int r=k*x;
    if ((n-k)==0) {
        printf("%d",r);
    } else if(x<y) {
        printf("%d",r+(n-k)*x);
    } else if (y<x) {
        printf("%d",r+(n-k)*y);
    }
}