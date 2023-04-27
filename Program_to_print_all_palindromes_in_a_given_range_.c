#include<stdio.h>
int palin(int n) {
    int m=n,rev=0;
    while(m>0) {
        rev=rev*10+m%10;
        m=m/10;
    }
    if (rev==n) return 1;
    else return 0;
}
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    for (int i=n;i<=m;i++) {
        if (palin(i)==1) printf("%d ",i);
    }
}