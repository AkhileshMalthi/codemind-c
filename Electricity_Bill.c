#include<stdio.h>
float sc(float b) {
    float s=0.00;
    if (b>400) {
        s=b*15/100;
        return s;
    } else 
    return s;
}
int main() {
    int u;
    float c,b,s,t;
    scanf("%d",&u);
    if (u<200) {
        c=1.20;
    } else if (u>=200 && u<400) {
        c=1.40;
    } else if (u>=400 && u<600) {
        c=1.60;
    } else if (u>=600 && u<800) {
        c=1.80;
    } else if (u>=800) {
        c=2.00;
    }
    b=u*c;
    s=sc(b);
    t=b+s;
    printf("Units Consumed: %d
Cost per Unit: %.2f
Bill: %.2f
Surcharge: %.2f
Total Amount: %.2f",u,c,b,s,t);
    return 0;
}