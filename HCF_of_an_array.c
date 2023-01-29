#include <stdio.h>
int hcf(int a,int b);
int main() {
   int n;
   scanf("%d",&n);
   int arr[n];
   for (int i=0;i<n;i++) {
       scanf("%d",&arr[i]);
   }
   int r=arr[0];
   for (int i=1;i<n;i++) {
       r=hcf(r,arr[i]);
   }
   printf("%d",r);
}
int hcf(int a, int b) {
    if (b == 0)
        return a;
    return hcf(b, a % b);
}
