#include <stdio.h>
//uygulama dersi 1
//girilen sayiyi tersine ceviren programi c diline kodlayalım.
int main(int argc,char** argv){
	int sayi,ters_sayi=0;
	printf("lutfen bir sayi giriniz..\n");
	scanf("%d",&sayi);
	
	while(sayi>0){
		ters_sayi=ters_sayi*10+sayi%10;
		sayi /=10;
	}
	printf("girdiginiz sayilarin ters ifadesi=%d \n",ters_sayi);
	
	return 0;
}
//anlasıldı
//deneme ve compile yapildi
