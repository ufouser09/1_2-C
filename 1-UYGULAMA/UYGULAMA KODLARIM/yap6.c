#define MAX_length 50
#include <stdio.h>
//yapsýal 2.uygulama dersi
//soru:dizinin majority elemaninin bulunmasi
//majority eleman:dizi boyutunun yarisindan fazla(>n/2)sayida dizi icersinde bulunan eleman

//ÖRNEK
// 3 3 1 3 2 3 6 3
//sonuc:majority element:3

//ÖRNEK
//3 3 1 4 2
//sonuc:no majority element	

//basit yaklasim -0(n*n)
//her bir elemanin frekansini bul
//her iterasyonda maksimum frekans sayisini guncelle
//maksimum frekans sayisi >n/2 kontrol et
//count=1

int main(){
	int n,arr[MAX_length];
	int count,maxCount=0,i,j,index=-1;
	
	do{
		printf("enter the of array:\n");
		scanf("%d",&n);
	}while(n>MAX_length);
	
	printf("enter the elements:\n");
	
	for(i=0;i<n;i++){
		printf("element[%d]:",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++){
		count=0;
		for(j=0;j<n;j++){
			if(arr[i]==arr[j])
			count++;
		}
		if(count>maxCount){
			maxCount=count;
			index=i;
		}
	}
	if(maxCount>n/2)
	printf("%d",arr[index]);
	else
	printf("no majority element");
	
	
	return 0;
	}
	//deneme ve compile yapildi
	//anlasýldý

