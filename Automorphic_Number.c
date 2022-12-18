#include<stdio.h>
int main() {
    int n,d=0,x=0;
    scanf("%d",&n);
    int m=n*n;
    for (int i=1;m!=0;i*=10) {
        d+=(m%10)*i;
        m=m/10;
        if (d==n) {
            x=1;
            break;
        }
    }
    if (x==1)
    printf("Automorphic Number");
    else 
    printf("Not an Automorphic Number");
    return 0;
}