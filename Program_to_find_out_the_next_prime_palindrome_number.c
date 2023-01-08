#include<stdio.h>
int rev(int n) {
    int rev=0;
    while (n!=0) {
        rev=rev*10+n%10;
        n=n/10;
    }
    return rev;
}
int prime(int n) {
    int r=1;
    for (int i=2;i<n;i++) {
        if (n%i==0)
        r=0;
    }
    return r;
}
int main() {
    int n;
    scanf("%d",&n);
    for (int i=n+1;i>0;i++) {
        if (i==rev(i) && prime(i)==1) {
        printf("%d",i);
        break;
        }
    }
}