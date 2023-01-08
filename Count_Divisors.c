#include<stdio.h>
int main() {
    int x,y,z,c=0;
    scanf("%d%d%d",&x,&y,&z);
    for (int i=x;i<=y;i++) {
        if (i%z==0)
        c++;
    }
    printf("%d",c);
}