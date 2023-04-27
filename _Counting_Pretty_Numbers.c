#include<stdio.h>
int pretty(int n) {
    if (n%10==2 || n%10==3 || n%10==9) return 1;
    else return 0;
}
int main() {
    int t;
    scanf("%d",&t);
    for (int tc=1;tc<=t;tc++) {
        int n,m,c=0;
        scanf("%d%d",&n,&m);
        for (int i=n;i<=m;i++) {
            if (pretty(i)==1) c++;
        }
        printf("%d
",c);
    }
}