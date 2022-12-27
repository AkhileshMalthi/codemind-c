#include<stdio.h>
int main() {
    int n,a,b,c=0;
    scanf("%d",&n);
    for (int i=1;i<n;i++) {
        for (int j=1;j<n;j++) {
           if (i*j==n) {
            a=i,b=j,c++;
            break;
           }
        }
        if (c==1) {
        printf("%d %d",a,b);
        break;
        }
    }
    if (c==0) {
        printf("-1");
    }
    return 0;
}