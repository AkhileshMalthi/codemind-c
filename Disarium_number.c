#include<stdio.h>
#include<math.h>
int rev(int n) {
	int rev=0;
	while (n!=0) {
		rev=rev*10+n%10;
		n=n/10;
	}
	return rev;
}
int main() {
	int n,m,ld,i=1,sum=0;
	scanf("%d",&n);
	m=rev(n);
	while(m!=0) {
		ld=m%10;
		sum+=pow(ld,i);
		m=m/10;
		i++;
	}
	if (sum==n)
	printf("True");
	else 
	printf("False");
    return 0;
}
