#include<stdio.h>
int prime(int n) {
    int r=1;
    for (int i=2;i<n;i++) {
        if (n%i==0) {
            r=0;
            break;
        }
    }
    return r;
}
int main() {
    int tc;
    scanf("%d",&tc);
    for (int t=1;t<=tc;t++) {
        int n,a,b;
        scanf("%d",&n);
        for (int i=n;i>0;i--) {
            if (prime(i)==1) {
                a=i;
                break;
            }
        }
        for (int i=n;i>0;i++) {
            if (prime(i)==1) {
                b=i;
                break;
            }
        }
        if (n-a<=b-n)
        printf("%d
",a);
        else
        printf("%d
",b);
    }
    return 0;
}