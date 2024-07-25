#define MAX_length 50
#include <stdio.h>
//yapýsal 2.uygulama dersi
//soru:dizinin ters versiyonunu bulunuz 
//kullanýcýdan dizi boyutu alýnmalý
//kullanýcýdan dizi elemanlari alýnmali

int main(){
	int arr[MAX_length],n;
	int start,end,temp,i;
	do{
		printf("enter the of array:");
		scanf("%d",&n);
	}while(n>MAX_length);
	
	printf("enter the elements:\n");
	
	for(i=0;i<n;i++){
		printf("element[%d]:",i+1);
		scanf("%d",&arr[i]);
	}
	start=0;
	end=n-1;
	
	while(start<end){
		//for(start=0,end=n-1;start<end;start++,end--) //burasý opsiyonel bir parçadýr.
		
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		
		start++;
		end--;
	}
	printf("result array:\n");
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	
	return 0;
}
//deneme ve compile yapildi
//anlasýldý
