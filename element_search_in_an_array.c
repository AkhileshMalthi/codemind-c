#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int m,r=0;
    scanf("%d",&m);
    for (int i=0;i<n;i++) {
        if (m==a[i])
        r=1;
    }
    if (r==1)
    printf("True");
    else
    printf("False");
    return 0;
}