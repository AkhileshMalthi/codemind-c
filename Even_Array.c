#include<stdio.h>
int main() {
    int n,r=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if (a[i]%2!=0) 
        r=1;
    }
    if (r==0)
    printf("True");
    else 
    printf("False");
    return 0;
}