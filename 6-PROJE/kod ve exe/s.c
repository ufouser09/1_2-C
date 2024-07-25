#include <stdio.h>

int main(){
	int a[100]={0,0};
	int N,i,j;
	printf("enter N,such that n<100");
	scanf("%d",&N);
	for(i=0;i<=N;i++){
		for(j=1;j<=N;j++){
			if(i%j==0)
			a[j-1]=!a[j-1];
		}
		for(j=0;j<N;j++)
		printf("%d",a[j]);
		printf("\n");
	}
	return 0;
}
