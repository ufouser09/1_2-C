#define MAX_length 50
#include <stdio.h>
//yapisal 2.uygulama dersi
//2.soruyu daha verimli bir yol ile cozun
//moore's voting algorithm;
//aday mojor elmentini belirle
//sadece adayin frekansini hesapla
//major eleman olmama olasiligi icin n/2'den buyuk olup olmadýgýný kontrol et!
int main(){
	int n,arr[MAX_length];
	int maj_index,i,count,cand;
	
	do{
		printf("enter the of array");
		scanf("%d",&n);
	}while(n>MAX_length);
	
	printf("enter the elements:\n");
    
    for(i=0;i<n;i++){
    	printf("element[%d]:",i+1);
    	scanf("%d",&arr[i]);
	}
    
	maj_index=0;
	count=1;
		
	for(i=1;i<n;i++){
		if(arr[maj_index]==arr[i]){
		
		count++;
	}
		else{
		
		
		count--;
	}
		if(count==0){
			maj_index=i;
			count=1;
		}
	}
	cand=arr[maj_index];
	count=0;
	
	for(i=0;i<n;i++){
		if(arr[i]==cand){
		
		count++;
		}
		if(count>n/2){
		printf("%d",cand);
	}
		else{
		
		printf("no majority element");
	}
		
		return 0;
	
}
//bu kod yanlýs gibi bir daha bak
