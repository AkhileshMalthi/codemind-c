#include<stdio.h>
int main() {
    int n,r=0,sum=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++) {
        sum+=a[i];
    }
    int avg=sum/n;
    for (int i=0;i<n;i++) {
        if (avg==a[i])
        r=1;
    }
    if (r==1)
    printf("True");
    else 
    printf("False");
    return 0;
}