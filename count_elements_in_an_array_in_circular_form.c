#include<stdio.h>
int main() {
    int n,count=0;
    scanf("%d",&n);
    int a[n+1];
    for (int i=1;i<(n+1);i++) {
        scanf("%d",&a[i]);
    }
    a[0]=a[n],a[n+1]=a[1];
    for (int i=1;i<(n+1);i++) {
        if (a[i-1]%2==0 && a[i+1]%2!=0)
        count++;
        else if (a[i-1]%2!=0 && a[i+1]%2==0)
        count++;
    }
    printf("%d",count);
}