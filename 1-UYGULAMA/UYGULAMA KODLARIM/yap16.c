#include <stdio.h>
int strlen(char *str1);

int main(){
	char str[50];
	int len;
	printf("enter your string\n");
	scanf("%s",str);
	//gets(str);
	len=strlen(str);
	
	printf("length of your string is:%d\n",len);
	
	return 0;
}
int strlen(char *str1){
	if(*str1!= '\0' ){
	
	return 1+strlen(++str1);
}
	return 0;
}
//betulturkkol--->(12)
//kod calýsýyor

/*
recursive(özyinelemeli)fonksiyonlar
kücük parcalara bolunebilen problemleri cözdugumuz algoritmalarda sýklýkla kullanilir

iki bolumden olusur

base case:
problemin en kucuk parcasýna ulastýgýmýzý gösterir,programlamada
bir kosulla ifade edilir

ör:if n==1


return someValue;

recursive Part:problemi bölmeye devam ettigimiz kýsýmdýr.base case'e ulasmadýgýmýz müddetce devam eder.


recursive(özyinelemeli)fonksiyonlar:tasarim ipuclari
Base case ne olmalý?
nerede duracagýz?

fonksiyonun yeni parametresi ile bir önceki parametresi arasinda nasýl bir baglantý olmali

problemi nasýl bölücegiz?


Recursive(özyinelemeli)fonksiyonlar:örnekler
1.verilen bir stringin uzunlugunu özyineleme metoduyla hesaplayan algoritmayi c dilinde gercekleyiniz
2.verilen bir sayinin basamak sayisini özyineleme metoduyla bulan algýritmayi c dilinde gercekleyiniz
3.1'den n'ye kadar olann sayilarin toplamini özyinleme metoduyla bulan algoritmayi c dilinde gercekleyiniz
4.verilen 2 sayinin EBOBUnu özyineleme metoduyla bulan algoritmayi c dlinde gercekleyiniz
5.verilen bir stringin tersini özyineleme metoduyla bulan algoritmayi c dilinde gercekleyiniz

*/









				
