#include<stdio.h>
int palindrome(int n) {
    int rev=0;
    while(n!=0) {
        rev=rev*10+n%10;
        n=n/10;
    }
    return rev;
}
int main() {
    int n,a,b;
    scanf("%d",&n);
    for (int i=(n-1);i>0;i--) {
        if (i==palindrome(i)) {
            a=i;
            break;
        }
    }
    for (int i=(n+1);i>0;i++) {
        if (i==palindrome(i)) {
            b=i;
            break;
        }
    }
    if ((n-a)<(b-n))
    printf("%d",a);
    else if ((n-a)>(b-n))
    printf("%d",b);
    else 
    printf("%d %d",a,b);
    return 0;
}