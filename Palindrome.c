#include <stdio.h>
int main() {
    int n,l,rev=0;
    scanf("%d",&n);
    int m=n;
    while(n>0) {
        l=n%10;
        rev=rev*10+l;
        n=n/10;
    }
    if (m==rev) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }
    return 0;
}
