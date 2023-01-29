#include<stdio.h>
int hcf(int a,int b) {
    if (b==0)
    return a;
    return hcf(b,a%b);
}
int main() {
    int a,b,temp;
    scanf("%d%d",&a,&b);
    printf("%d",hcf(a,b));
    return 0;
}