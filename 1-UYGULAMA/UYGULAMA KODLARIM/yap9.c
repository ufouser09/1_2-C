#define N 10
#include <stdio.h>
//yapsýal 2.uygulama dersi
//NxN boyutlu bir binary matrisin ilkkösegene göre simetrik olmasi icin gerekn minimum degisiklik sayisi kactir?
//basit yaklasim 
//matrisin transpozesini bul
//orijinal matris ile transpozunu karsýlastýr
int main(){
	int a[N][N],T[N][N],n;
	int i,j;
	int flip;
	
	do{
		printf("enter the column size");
		scanf("%d",&n);
	}while(n>N);
	
	printf("enter the elements");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("element[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//print
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",a[i][j]);
		}
			printf("\n");
		}
		
	//a->mxn t-> nxm	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		
		T[i][j]=a[j][i];
	}
}
	flip=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j] !=T[i][j]);
			flip++;
		}
	}
	printf("number of flip %d",flip/2);
	
	return 0;
		
		
		}
	
	

