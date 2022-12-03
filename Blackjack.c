#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=21-(a+b);
    if (c<=10 && a+b+c==21) {
        printf("%d",c);
    } else if (a+b<=10 || c>10) {
        printf("-1");
    }
    return 0;
}