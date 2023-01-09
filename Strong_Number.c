#include<stdio.h>
int fact(int n) {
    int fact=1;
    for (int i=2;i<=n;i++) {
        fact=fact*i;
    }
    return fact;
}
int sum(int n) {
    int sum=0;
    while (n!=0) {
        sum=sum+fact(n%10);
        n=n/10;
    }
    return sum;
}
int main() {
    int n;
    scanf("%d",&n);
    if (n==sum(n))
    printf("The number %d is a strong number",n);
    else 
    printf("The number %d is not a strong number",n);
    return 0;
}