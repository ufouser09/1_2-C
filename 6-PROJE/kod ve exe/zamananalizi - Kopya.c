// fibonnaci search
#include <stdio.h>
#include <time.h>
 
// burda bir fonksiyon tanýmlýyoruz bu fonksiyon girilen iki degerden kucugunu bulmamýzý saglýyor
//asagýda bu fonksiyonu kullanýcaz
int min(int a, int b) 
{
 return (a < b) ? a : b; //a eger b den kucukse a,eger kucuk degilse b
 }
 
/* Returns index of x if present,  else returns -1 */
int fibMonaccianSearch(int arr[], int x, int n)
{
    /* Fibonacci sayýlarýný baþlat */
    int fib2 = 0; // fibonacci serisinin ilkini kendimiz verdik
    int fib1 = 1; // fibonacci serisinin ikincisini de kendimiz verdik
    int fib = fib2 + fib1; // burda fibonacci serilerinin mantýgý olan ardýsýk 2 terimin toplamýnýn 3.sunu verdigini islemsel olarak yaptýk
 
    /* eger fib degiskenimiz sayýnýn boyutundan kucukse while ý döndürdük */
    while (fib < n) {
        fib2 = fib1;//burada fibonacci serisini 1 adým ileri götürdük
        fib1 = fib;
        fib = fib2 + fib1;
    }
 
    //burda offset diye bir degisken tutuyoruz bunun -1 den baslamasýnýn sebebi kodlamada diziler 1 den degil 0 dan baslar yani mesela 4.dedigimiz eleman dizide ar[3] olarak tutulur bunun nedeni dedigimiz gibi dizilerin 0 dan baslamasýdýr 
    int offset = -1;
 
    
       //fib degerimiz eger 1 den buyukse while ý döndürmeye devam et
    while (fib > 1) {
        //fib2 ile dizinin boyutunu karsýlastýr kücük olani i degiskenine ata(diziler kodda 0'dan basladýgý icin dizinin boyutunu yazarken de 1 çýkardýk
        int i = min(offset + fib2, n - 1);
 
        /* arr[i] degerimiz aradýgýmýz degerden(x) kucukse bu if in icine gir */
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
 
        //eger arr[i] degerimiz aradýgýmýz degerden buyuk ya da kucuk degilse otomatikman eþittir o zaman else e girecektir
        else
            return i;
    }
 
    /* son elemaný x ile karþýlaþtýrmak */
    printf("deneme %d",offset);
    if (fib1 && arr[offset + 1] == x)
        return offset + 1;
 
    /*eger elemaný bulamazsak -1 döndür */
    return -1;
}
 
/* driver function */
int main(void)
{
	int n,x,k;//degiskenleri tanýmladýk
	printf("lutfen dizinin boyutunu aliniz\n");//kullanýcýdan dizinin boyutunu aldýk
	scanf("%d",&n);
	
	
    int arr[n];//diziyi tanýmladýk
    //kullanýcýdan diziyi aldýk
    for(k=0;k<n;k++){
    	printf("%d.elemaný giriniz\n",k+1);
    	scanf("%d",&arr[k]);
	}
    //kullanýcýnýn aradýgý degeri kullanýcýdan alýnýz
	printf("aradiginiz degeri girin\n");
	scanf("%d",&x);
    
	for(k=0;k<n;k++){
		printf("%d\n",arr[k]);
	}
      
	  int ind = fibMonaccianSearch(arr, x, n);
  
  //indisimiz 0 dan büyükse indisi yazdýr ama yukarýdaki fonksiyonda gördügünüz gibi sayýyý bulamazsak -1 döndür demiþtik yani eger -1 döndürülürse if e degil else e girecek burda da sayiyi bulamadýgýmýzý ekrana yazdiracak
  if(ind>=0)
    printf("dizimide sayýmýz bulundu: dizinin %d. elemanýdýr\n",ind+1);
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

/*n boyutunda sýralanmýþ bir dizi [] ve içinde aranacak bir x öðesi verildi. Dizide varsa x'in dizini döndürür, aksi takdirde -1 döndürür.

Fibonacci Aramasý, sýralanmýþ bir dizideki bir öðeyi aramak için Fibonacci sayýlarýný kullanan karþýlaþtýrma tabanlý bir tekniktir.

Ýkili Arama ile benzerlikler:
Sýralanmýþ diziler için çalýþýr
Böl ve Yönet Algoritmasý.
Log n zaman karmaþýklýðýna sahiptir.

Ýkili Arama ile Farklar:
Fibonacci Aramasý, verilen diziyi eþit olmayan parçalara böler
Ýkili Arama, aralýðý bölmek için bir bölme operatörü kullanýr. 
Fibonacci Search / kullanmaz, + ve - kullanýr. Bölme operatörü bazý CPU'larda maliyetli olabilir.
Fibonacci Aramasý, sonraki adýmlarda nispeten daha yakýn öðeleri inceler. Bu nedenle, giriþ dizisi CPU önbelleðine veya hatta RAM'e sýðamayacak kadar büyük olduðunda, Fibonacci Aramasý yararlý olabilir.

Arka fon(background):
Fibonacci Sayýlarý özyinelemeli olarak F(n) = F(n-1) + F(n-2), F(0) = 0, F(1) = 1 olarak tanýmlanýr. 
Ýlk birkaç Fibinacci Sayýsý 0, 1, 1'dir, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, …

observation:
Aþaðýdaki gözlem, menzil eliminasyonu ve dolayýsýyla O(log(n)) karmaþýklýðý için kullanýlýr.

algoritma:
Aranan eleman x olsun.
Buradaki fikir, önce verilen dizinin uzunluðundan büyük veya ona eþit olan en küçük Fibonacci sayýsýný bulmaktýr. Bulunan Fibonacci sayýsý fib (m'inci Fibonacci sayýsý) olsun. Ýndeks olarak (m-2)'inci Fibonacci sayýsýný kullanýyoruz (eðer geçerli bir indeks ise). (m-2)'inci Fibonacci Sayýsý i olsun, arr[i]'yi x ile karþýlaþtýrýrýz, x ayný ise i döndürürüz. Aksi takdirde, eðer x daha büyükse, i'den sonra alt dizi için yineleniriz, yoksa i'den önce alt dizi için yineleniriz.
Aþaðýda tam algoritma
arr[0..n-1] girdi dizisi olsun ve aranacak eleman x olsun.


1.
n'den büyük veya eþit en küçük Fibonacci Sayýsýný bulun. Bu sayý fibM [m'inci Fibonacci Sayýsý] olsun. 
Ondan önceki iki Fibonacci sayýsý fibMm1 [(m-1)'th Fibonacci Number] ve fibMm2 [(m-2)'th Fibonacci Number] olsun.


2.
Dizinin denetlenecek öðeleri olsa da:
1.x'i fibMm2'nin kapsadýðý aralýðýn son öðesiyle karþýlaþtýrýn
2.if,x eþleþirse, dizini döndür
3.else if,Aksi takdirde, x elemandan küçükse, üç Fibonacci deðiþkenini iki Fibonacci aþaðý hareket ettirin; bu, kalan dizinin yaklaþýk üçte ikisinin ortadan kaldýrýldýðýný gösterir.
4.else,x elemandan büyükse, üç Fibonacci deðiþkenini bir Fibonacci aþaðý hareket ettirin. Ofseti dizine sýfýrlayýn. Bunlar birlikte, kalan dizinin yaklaþýk üçte birinin ortadan kaldýrýldýðýný gösterir.


3.
Karþýlaþtýrma için kalan tek bir öðe olabileceðinden, fibMm1'in 1 olup olmadýðýný kontrol edin. Evet ise, x'i bu kalan öðeyle karþýlaþtýrýn. Eþleþirse, dizini döndürün.
*/
