#include<stdio.h>
int main() {
    int n,evensum=0,oddsum=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if (a[i]%2==0)
        evensum+=a[i];
        else
        oddsum+=a[i];
    }
    evensum>oddsum ? printf("%d",evensum-oddsum):printf("%d",oddsum-evensum);
    return 0;
}