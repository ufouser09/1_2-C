#include <stdio.h>
int main(){
	int N,eksik,i,counter=0;
	printf("dizinin boyutunu giriniz=\n");
	scanf("%d",&N);
	
	int A[N];
	
	printf("dizinin elemanlarini giriniz:\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<N-1;i++){
		if(A[i+1]==A[i]+1){
			counter++;
		}
		else{
			eksik=A[i]+1;
			
		}
		
	}	
	if(counter==N-1){
		printf("no missing value\n");
		
	}
	else{
		printf("eksik sayi=%d",eksik);
	}
	
	return 0;
}
