#include<stdio.h>
#include<math.h>
int main() {
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for (int i=(n-1);i>=0;i--) {
        scanf("%d",&a[i]);
        sum+=pow(2,i)*a[i];
    }
    printf("%d",sum);
    return 0;
}