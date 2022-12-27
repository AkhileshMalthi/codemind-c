#include<stdio.h>
int main() {
	int n,ft=0,st=1,nt;
	scanf("%d",&n);
	printf("0 1 ");
	for (int i=1;i<(n-1);i++) {
		nt=ft+st;
		ft=st;
		st=nt;
		printf("%d ",nt);
	}
    return 0;
}
