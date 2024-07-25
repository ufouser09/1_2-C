#include <stdio.h>
#define SIZE 100
	int main(void){
		int i,n,a[SIZE],start,end,temp;
		do{
		printf("lutfen dizinin eleman sayisini giriniz");
		scanf("%d",&n);
	}while(n > SIZE);
		for(i=1;i<=n;i++){
			printf("lutfen dizinin %d. elemanini giriniz",i);
			scanf("%d",&a[i]);
		}
		start=1;
		end=n;
		while(start<end){
			temp= a[start];
			a[start]=a[end];
			a[end]=temp;
			start++;
			end--;
		}
		for(i=1;i<=n;i++){
			printf("dizinin %d. elemani %d\n",i,a[i]);
		}
		return 0;
	}

