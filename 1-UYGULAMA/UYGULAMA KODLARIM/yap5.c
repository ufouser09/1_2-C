#define MAX_length 50
#include <stdio.h>
//yap�sal 2.uygulama dersi
//soru:dizinin ters versiyonunu bulunuz 
//kullan�c�dan dizi boyutu al�nmal�
//kullan�c�dan dizi elemanlari al�nmali

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
		//for(start=0,end=n-1;start<end;start++,end--) //buras� opsiyonel bir par�ad�r.
		
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
//anlas�ld�
