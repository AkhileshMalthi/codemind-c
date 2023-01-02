#include<stdio.h>
int main() {
    int n,r=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if (a[i]>1)
        r=1;
    }
    if (r==1)
    printf("False");
    else 
    printf("True");
    return 0;
}