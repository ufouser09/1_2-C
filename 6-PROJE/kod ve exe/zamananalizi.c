// fibonnaci search
#include <stdio.h>
#include <time.h>
 
// burda bir fonksiyon tan�ml�yoruz bu fonksiyon girilen iki degerden kucugunu bulmam�z� sagl�yor
//asag�da bu fonksiyonu kullan�caz
int min(int a, int b) 
{
 return (a < b) ? a : b; //a eger b den kucukse a,eger kucuk degilse b
 }
 
/* Returns index of x if present,  else returns -1 */
int fibMonaccianSearch(int arr[], int x, int n)
{
    /* Fibonacci say�lar�n� ba�lat */
    int fib2 = 0; // fibonacci serisinin ilkini kendimiz verdik
    int fib1 = 1; // fibonacci serisinin ikincisini de kendimiz verdik
    int fib = fib2 + fib1; // burda fibonacci serilerinin mant�g� olan ard�s�k 2 terimin toplam�n�n 3.sunu verdigini islemsel olarak yapt�k
 
    /* eger fib degiskenimiz say�n�n boyutundan kucukse while � d�nd�rd�k */
    while (fib < n) {
        fib2 = fib1;//burada fibonacci serisini 1 ad�m ileri g�t�rd�k
        fib1 = fib;
        fib = fib2 + fib1;
    }
 
    //burda offset diye bir degisken tutuyoruz bunun -1 den baslamas�n�n sebebi kodlamada diziler 1 den degil 0 dan baslar yani mesela 4.dedigimiz eleman dizide ar[3] olarak tutulur bunun nedeni dedigimiz gibi dizilerin 0 dan baslamas�d�r 
    int offset = -1;
 
    
       //fib degerimiz eger 1 den buyukse while � d�nd�rmeye devam et
    while (fib > 1) {
        //fib2 ile dizinin boyutunu kars�last�r k�c�k olani i degiskenine ata(diziler kodda 0'dan baslad�g� icin dizinin boyutunu yazarken de 1 ��kard�k
        int i = min(offset + fib2, n - 1);
 
        /* arr[i] degerimiz arad�g�m�z degerden(x) kucukse bu if in icine gir */
        if (arr[i] < x) {
            fib = fib1;
            fib1 = fib2;
            fib2 = fib - fib1;
            offset = i;
        }
 
       //eger arr[i] degerimiz aradigimiz degerden buyukse buraya girer
        else if (arr[i] > x) {
            fib = fib2;
            fib1 = fib1 - fib2;
            fib2 = fib - fib1;
        }
 
        //eger arr[i] degerimiz arad�g�m�z degerden buyuk ya da kucuk degilse otomatikman e�ittir o zaman else e girecektir
        else
            return i;
    }
 
    /* son eleman� x ile kar��la�t�rmak */
    printf("deneme %d",offset);
    if (fib1 && arr[offset + 1] == x)
        return offset + 1;
 
    /*eger eleman� bulamazsak -1 d�nd�r */
    return -1;
}
 
/* driver function */
int main(void)
{
	int n,x,k;//degiskenleri tan�mlad�k
	printf("lutfen dizinin boyutunu aliniz\n");//kullan�c�dan dizinin boyutunu ald�k
	scanf("%d",&n);
	
	
    int arr[n];//diziyi tan�mlad�k
    //kullan�c�dan diziyi ald�k
    for(k=0;k<n;k++){
    	printf("%d.eleman� giriniz\n",k+1);
    	scanf("%d",&arr[k]);
	}
    //kullan�c�n�n arad�g� degeri kullan�c�dan al�n�z
	printf("aradiginiz degeri girin\n");
	scanf("%d",&x);
    
	for(k=0;k<n;k++){
		printf("%d\n",arr[k]);
	}
      
	  int ind = fibMonaccianSearch(arr, x, n);
  
  //indisimiz 0 dan b�y�kse indisi yazd�r ama yukar�daki fonksiyonda g�rd�g�n�z gibi say�y� bulamazsak -1 d�nd�r demi�tik yani eger -1 d�nd�r�l�rse if e degil else e girecek burda da sayiyi bulamad�g�m�z� ekrana yazdiracak
  if(ind>=0)
    printf("dizimide say�m�z bulundu: dizinin %d. eleman�d�r\n",ind+1);
  else
    printf("%d dizide yoktur\n",x);
    
    clock_t t;
	t = clock();
	for(k=0;k<1000;k++){
	    fibMonaccianSearch( arr, x, n);
	}
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("fun() took %f seconds to execute \n", time_taken);

    return 0;
}

/*n boyutunda s�ralanm�� bir dizi [] ve i�inde aranacak bir x ��esi verildi. Dizide varsa x'in dizini d�nd�r�r, aksi takdirde -1 d�nd�r�r.

Fibonacci Aramas�, s�ralanm�� bir dizideki bir ��eyi aramak i�in Fibonacci say�lar�n� kullanan kar��la�t�rma tabanl� bir tekniktir.

�kili Arama ile benzerlikler:
S�ralanm�� diziler i�in �al���r
B�l ve Y�net Algoritmas�.
Log n zaman karma��kl���na sahiptir.

�kili Arama ile Farklar:
Fibonacci Aramas�, verilen diziyi e�it olmayan par�alara b�ler
�kili Arama, aral��� b�lmek i�in bir b�lme operat�r� kullan�r. 
Fibonacci Search / kullanmaz, + ve - kullan�r. B�lme operat�r� baz� CPU'larda maliyetli olabilir.
Fibonacci Aramas�, sonraki ad�mlarda nispeten daha yak�n ��eleri inceler. Bu nedenle, giri� dizisi CPU �nbelle�ine veya hatta RAM'e s��amayacak kadar b�y�k oldu�unda, Fibonacci Aramas� yararl� olabilir.

Arka fon(background):
Fibonacci Say�lar� �zyinelemeli olarak F(n) = F(n-1) + F(n-2), F(0) = 0, F(1) = 1 olarak tan�mlan�r. 
�lk birka� Fibinacci Say�s� 0, 1, 1'dir, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, �

observation:
A�a��daki g�zlem, menzil eliminasyonu ve dolay�s�yla O(log(n)) karma��kl��� i�in kullan�l�r.

algoritma:
Aranan eleman x olsun.
Buradaki fikir, �nce verilen dizinin uzunlu�undan b�y�k veya ona e�it olan en k���k Fibonacci say�s�n� bulmakt�r. Bulunan Fibonacci say�s� fib (m'inci Fibonacci say�s�) olsun. �ndeks olarak (m-2)'inci Fibonacci say�s�n� kullan�yoruz (e�er ge�erli bir indeks ise). (m-2)'inci Fibonacci Say�s� i olsun, arr[i]'yi x ile kar��la�t�r�r�z, x ayn� ise i d�nd�r�r�z. Aksi takdirde, e�er x daha b�y�kse, i'den sonra alt dizi i�in yineleniriz, yoksa i'den �nce alt dizi i�in yineleniriz.
A�a��da tam algoritma
arr[0..n-1] girdi dizisi olsun ve aranacak eleman x olsun.


1.
n'den b�y�k veya e�it en k���k Fibonacci Say�s�n� bulun. Bu say� fibM [m'inci Fibonacci Say�s�] olsun. 
Ondan �nceki iki Fibonacci say�s� fibMm1 [(m-1)'th Fibonacci Number] ve fibMm2 [(m-2)'th Fibonacci Number] olsun.


2.
Dizinin denetlenecek ��eleri olsa da:
1.x'i fibMm2'nin kapsad��� aral���n son ��esiyle kar��la�t�r�n
2.if,x e�le�irse, dizini d�nd�r
3.else if,Aksi takdirde, x elemandan k���kse, �� Fibonacci de�i�kenini iki Fibonacci a�a�� hareket ettirin; bu, kalan dizinin yakla��k ��te ikisinin ortadan kald�r�ld���n� g�sterir.
4.else,x elemandan b�y�kse, �� Fibonacci de�i�kenini bir Fibonacci a�a�� hareket ettirin. Ofseti dizine s�f�rlay�n. Bunlar birlikte, kalan dizinin yakla��k ��te birinin ortadan kald�r�ld���n� g�sterir.


3.
Kar��la�t�rma i�in kalan tek bir ��e olabilece�inden, fibMm1'in 1 olup olmad���n� kontrol edin. Evet ise, x'i bu kalan ��eyle kar��la�t�r�n. E�le�irse, dizini d�nd�r�n.
*/
