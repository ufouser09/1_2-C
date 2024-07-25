#include <stdio.h>
//uygulama ders 1
//kullanicidan alinan 10 tabaninda bir sayiyi 2 tabanli bir sayi olarak ifade eden programi c dilinde kodlayalım.
int main(int argc,char** argv){
	int sayi,on_us=1,ikilik_sayi=0,mem;
	printf("bir sayi giriniz...\n");
	scanf("%d",&sayi);
	mem=sayi;
	while(sayi>0){
		ikilik sayi += sayi %2*on_us;
		on_us *=10;
		sayi /=2;
		
	}
	printf("(%d)10 =(%d)2",mem,ikilik_sayi);
	return 0;
}
//bunu sor
