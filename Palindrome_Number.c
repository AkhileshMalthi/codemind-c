#include<stdio.h>
int rev(int n) {
    int rev=0;
    while(n>0) {
        rev=rev*10+(n%10);
        n=n/10;
    }
    return rev;
}
int main() {
    int t;
    scanf("%d",&t);
    for (int tc=0;tc<t;tc++) {
        int n;
        scanf("%d",&n);
        if (rev(n)==n)
        printf("True
");
        else
        printf("False
");
    }
    return 0;
}