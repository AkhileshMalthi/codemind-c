#include<stdio.h>
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n*m;i++) {
            if (n*i%m==0) {
                printf("%d",n*i);
                break;
            }
    }
    return 0;
}