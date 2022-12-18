#include<stdio.h>
int sum(int n) {
    int sum=0;
    while (n!=0) {
        sum=sum+((n%10)*(n%10));
        n=n/10;
    }
    return sum;
}
int main() {
    int n;
    scanf("%d",&n);
    while (sum(n)>9) {
        n=sum(n);
    }
    n=sum(n);
    if (n==1 || n==7)
    printf("True");
    else
    printf("False");
    return 0;
}