#include<stdio.h>
int main() {
    int n,m,l;
    scanf("%d%d",&n,&m);
    for (int i=1;i<=m*n;i++) {
        if ((n*i)%m==0) {
            l=n*i;
            break;
        }
    }
    int g=(n*m)/l;
    printf("%d",g);
    return 0;
}