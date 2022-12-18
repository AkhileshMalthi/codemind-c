#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int ld=n%10;
    while (n>0) {
        int x=n%10;
        if (ld<x)
        ld=x;
        n=n/10;
    }
    printf("%d",ld);
    return 0;
}