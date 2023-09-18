#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int StrictlyEven = 1;
    for (int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        if (arr[i]%2==0 && i%2!=0) {
            StrictlyEven = 0;
            break;
        }
    }
    if (StrictlyEven)
    printf("True");
    else
    printf("False");
}