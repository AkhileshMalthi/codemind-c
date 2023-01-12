#include<stdio.h>
#include<math.h>
int firstx(int n,int x) {
    while (n>pow(10,x)) {
        n=n/10;
    }
    return n;
}
int lastx(int n,int x) {
    int p=pow(10,x);
    return n%p;
}
int main() {
    int n,x;
    scanf("%d%d",&n,&x);
    int a=firstx(n,x),b=lastx(n,x);
    a>b ? printf("%d",a-b):printf("%d",b-a);
    return 0;
}