#include<stdio.h>
int main() {
    int n,ss=0,sum=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        ss=i*i+ss;
        sum=sum+i;
    }
    printf("%d",sum*sum-ss);
    return 0;
}