#include <stdio.h>

int main() {
    int n,l,rev=0;
    scanf("%d",&n);
    while(n>0) {
        l=n%10;
        rev=rev*10+l;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}