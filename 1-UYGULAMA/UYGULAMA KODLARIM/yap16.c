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
//kod cal�s�yor

/*
recursive(�zyinelemeli)fonksiyonlar
k�c�k parcalara bolunebilen problemleri c�zdugumuz algoritmalarda s�kl�kla kullanilir

iki bolumden olusur

base case:
problemin en kucuk parcas�na ulast�g�m�z� g�sterir,programlamada
bir kosulla ifade edilir

�r:if n==1


return someValue;

recursive Part:problemi b�lmeye devam ettigimiz k�s�md�r.base case'e ulasmad�g�m�z m�ddetce devam eder.


recursive(�zyinelemeli)fonksiyonlar:tasarim ipuclari
Base case ne olmal�?
nerede duracag�z?

fonksiyonun yeni parametresi ile bir �nceki parametresi arasinda nas�l bir baglant� olmali

problemi nas�l b�l�cegiz?


Recursive(�zyinelemeli)fonksiyonlar:�rnekler
1.verilen bir stringin uzunlugunu �zyineleme metoduyla hesaplayan algoritmayi c dilinde gercekleyiniz
2.verilen bir sayinin basamak sayisini �zyineleme metoduyla bulan alg�ritmayi c dilinde gercekleyiniz
3.1'den n'ye kadar olann sayilarin toplamini �zyinleme metoduyla bulan algoritmayi c dilinde gercekleyiniz
4.verilen 2 sayinin EBOBUnu �zyineleme metoduyla bulan algoritmayi c dlinde gercekleyiniz
5.verilen bir stringin tersini �zyineleme metoduyla bulan algoritmayi c dilinde gercekleyiniz

*/









				
