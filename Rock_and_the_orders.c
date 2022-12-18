#include<stdio.h>
int main() {
    int d,c,a1,a2,a3,b1,b2,b3;
    scanf("%d%d%d%d%d%d%d%d",&d,&c,&a1,&a2,&a3,&b1,&b2,&b3);
    int a=a1+a2+a3,b=b1+b2+b3,x,y=a+b+d+d;
    if (a>=150 && b>=150)
    x=a+b+c;
    else if (a<150 && b<150)
    x=a+b+d+d;
    else 
    x=a+b+c+d;
    
    if (x<y)
    printf("YES");
    else
    printf("NO");
    
}