#include<stdio.h>
#include<math.h>
int main() {
    int n;
    scanf("%d",&n);
    int m=sqrt(n);
    if (n==m*m)
    printf("True");
    else 
    printf("False");
    return 0;
}