#include<stdio.h>
int rev(int n) {
    int rev=0;
    while(n!=0) {
        rev=rev*10+n%10;
        n=n/10;
    }
    return rev;
}
int main() {
    int n,m,a,b;
    scanf("%d",&n);
    a=n*n;
    m=rev(n);
    b=m*m;
    if (rev(b)==a) 
    printf("True"); 
    else 
    printf("False");
    return 0;
}