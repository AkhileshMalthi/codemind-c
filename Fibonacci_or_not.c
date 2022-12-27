#include<stdio.h>
int main() {
	int n,ft=0,st=1,nt,r;
	scanf("%d",&n);
	for (int i=1;i<=n*n;i++) {
		nt=ft+st;
		ft=st;
		st=nt;
		if (nt==n) {
			r=1;
			break;
		} else 
		    r=0;
	}
	if (r==1)
	printf("True");
	else 
	printf("False");
    return 0;
}
