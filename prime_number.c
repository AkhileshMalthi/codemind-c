#include<stdio.h>
int main() {
    int n,r=1;
    scanf("%d",&n);
    for (int i=2;i<n;i++) {
        if (n%i==0) {
        r=0;
        break;
        }
    }
    if (r==1)
    printf("prime");
    else
    printf("not a prime");
}