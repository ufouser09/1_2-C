#include <stdio.h>
#define size 100
int main(){
	int N,t,k,e,i;
	printf("lutfen N sayisini giriniz\n");
	scanf("%d",&N);
	int f[size];
	f[1]=1;
	f[2]=1;
	t=0;
	k=1;
	e=1;
	for(i=3;i<N;i++){
		t=k+e;
		e=k;
		k=t;
	}
	printf("%d",t);
	return 0;
}
//e k t
//kod calýsýyor
//sayfa 8
