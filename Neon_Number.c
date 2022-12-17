#include<stdio.h>
int sum(int n) {
    int sum=0;
    while (n!=0) {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
int main() {
    int n;
    scanf("%d",&n);
    if (sum(n*n)==n)
    printf("Neon Number");
    else 
    printf("Not Neon Number");
    return 0;
}