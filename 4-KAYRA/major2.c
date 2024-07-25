#include <stdio.h>
#define SIZE 100 
	int main(void){ 
		int i,n,a[SIZE],count, maxCount=0,j,index=-1;
		printf("lutfen dizinin eleman sayisini giriniz");
		scanf("%d",&n);
		for(i=1;i<=n;i++){
			printf("lutfen dizinin %d. elemanini giriniz",i);
			scanf("%d",&a[i]);
		}
		for(i=1;i<=n;i++){
			count=0;
			for(j=1;j<=n;j++){
				if(a[i]==a[j]){
					count++;
				}
			}
		}
		if(count>maxCount){
			maxCount = count;
			index=i;
		}
		if(maxCount>n/2){
			printf("%d",a[index]);
		}
		else{
			printf("No majority element");
		}
		return 0;
	}

