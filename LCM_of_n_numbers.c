// Online C compiler to run C program online
#include <stdio.h>
int hcf(int a, int b) {
    if (b==0)
    return a;
    int c=a%b;
    hcf(b,c);
}
int lcm(int a,int b) {
    int lcm = (a*b)/hcf(a,b);
}
int main() {
   int n;
   scanf("%d",&n);
   int arr[n];
   for (int i=0;i<n;i++) {
       scanf("%d",&arr[i]);
   }
   int r=arr[0];
   for (int i=1;i<n;i++) {
       r=lcm(r,arr[i]);
   }
   printf("%d",r);
}
