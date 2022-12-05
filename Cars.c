#include<stdio.h>
int main() {
    int n,m;
    scanf("%d",&n);
    m=n+4-n%4;
    if (n<=4)
    printf("%d",1);
    else if(n%4==0)
    printf("%d",n/4);
    else
    printf("%d",m/4);
}