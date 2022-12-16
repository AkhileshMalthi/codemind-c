#include<stdio.h>
int main() {
    int n,m=0;
    scanf("%d",&n);
    for (int i=2;i<n;i++) {
        if (n%i==0) {
           m=1;
        }
    }
    if (m==0) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }
    return 0;
}