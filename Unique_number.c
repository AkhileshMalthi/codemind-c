#include<stdio.h>
int digits (int n) {
    int c=0;
    while (n!=0) {
        c++;
        n=n/10;
    }
    return c;
}
int main() {
    int n,m,s,c=0;
    scanf("%d",&n);
    m=n;
    s=digits(n);
    int arr[s];
    for (int i=0;i<s;i++) {
        arr[i]=m%10;
        m=m/10;
    }
    for (int i=0;i<s;i++) {
        for (int j=0;j<s;j++) {
            if (i!=j && arr[i]==arr[j]) {
                c++;
            }
        }
    }
    if (c<1) 
    printf("Unique Number");
    else 
    printf("Not Unique Number");
    return 0;
}