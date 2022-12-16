#include<stdio.h>
int main() {
    int a[50];
    for (int i=0;i>=0;i++) {
        scanf("%d",&a[i]);
        if (a[i]!=-1)
        printf("%d
",a[i]*a[i]);
        else 
        break;
    }
    return 0;
}