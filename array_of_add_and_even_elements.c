#include<stdio.h>
int main() {
    int n,c=0;
    scanf("%d",&n);
    int a[n],b[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++) {
        if (a[i]%2!=0) {
            b[c]=a[i];
            c++;
        }
    }
    for (int i=0;i<n;i++) {
        if (a[i]%2==0) {
            b[c]=a[i];
            c++;
        }
    }
    for (int i=0;i<n;i++) {
        printf("%d ",b[i]);
    }
}