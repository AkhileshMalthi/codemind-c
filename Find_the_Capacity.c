#include<stdio.h>
int main() {
    int t,s,b;
    scanf("%d%d%d",&t,&s,&b);
    int c=2*s*t*b*512;
    printf("%dKB",c/1024);
    return 0;
}