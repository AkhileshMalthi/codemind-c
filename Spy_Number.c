#include<stdio.h>
int sum(int n) {
    int sum=0;
    while (n!=0) {
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
int product(int n) {
    int product=1;
    while (n!=0) {
        product=product*(n%10);
        n=n/10;
    }
    return product;
}
int main() {
    int n;
    scanf("%d",&n);
    if (sum(n)==product(n))
    printf("Spy Number");
    else 
    printf("Not Spy Number");
    return 0;
}