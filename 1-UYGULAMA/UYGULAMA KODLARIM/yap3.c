#include <stdio.h>
//uygulama ders 1
//N haneli bir sayinin basamaklarinin n'inci ustlerinden toplamlari,sayinin kendisine e�itse,bu sayilara armstrong sayilari denir.
//�rnegin 371 sayisi bir armstrong sayidir.
//3^3+7^3+1^3=371
//100 ile 1000 arasindaki t�m armstrong sayilarini bulan programi c dilinde kodlayal�m.
int main(int argc,char** argv){
	int i,sayi,toplam,basamak;
	printf("100-1000 arasindaki armstrtong sayilar=");
	
	for(i=100;i<1000;i++){
		sayi=i;
		toplam=0;
		while(sayi>0){
			basamak = sayi%10;
			toplam +=basamak*basamak*basamak;
			sayi /=10;
			
		}
		if(toplam ==i){
			printf("%d,",toplam);
		}
	}
	return 0;
}
//anlas�ld�
//denendi ve compile edildi
