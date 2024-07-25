#include <stdio.h>
void elemanEkle (int*,int,int,int*);
void elemanSil (int*,int,int*);
void listeleriYazdir(int*,int*,int);
void siraliYazdir (int*,int*);
int main()
{
	static int B[10],A[10],PO[10],N,i,j,k,ek,sil;
	printf("eklenecek dizi eleman sayisi?\n");
	scanf("%d",&N);
	printf("elemanlar?\n");
	for (i=1;i<=N;i++)
		scanf("%d",&B[i]);
	PO[0]=1;
	A[1]=B[1];
	PO[1]=-1;
	for (i=2;i<=N;i++)
	{
		ek=B[i];
		elemanEkle (A,i,ek,PO);		
	}
	
	listeleriYazdir(A,PO,N);
	
	printf("eklenecek eleman?\n");
	scanf("%d",&ek);
	elemanEkle (A,i,ek,PO);	
	N=N+1;
	listeleriYazdir(A,PO,N);
	siraliYazdir(A,PO);
	printf("silineceklenecek eleman?\n");
	scanf("%d",&sil);
	elemanSil (A,sil,PO);			
	listeleriYazdir(A,PO,N);
	siraliYazdir(A,PO);
	return 0;
	
}

//gelen eleman� A[]'n�n en sonuna ekle
//linkli listeyi ba�tan tara. linkli listenin her eleman� i�in bu elemana referans veren ve bu eleman�n referans verdi�i elemanlar� sakla
//gerekiyorsa araya, gerekiyorsa ba�a ya da sona eklemek i�in link baglantilarini kur
void elemanEkle (int A[],int i,int ek,int PO[])
{
	int k=0;		//ilgili elemana referans veren. �uan liste ba��n� i�aret ediyor
	int j;			//bir sonraki elemana ge�ebilmek i�in
	A[i]=ek;		//yeni eleman� A[] dizisinin i. indisine yaz
	j=PO[0];		//j liste ba��ndaki eleman�n indisini g�stersin
	while ((j!=-1) && (A[j]<ek))	//listenin sonuna ula�mad���n ve s�radaki eleman eklenecek elemandan k���k oldu�u s�rece
									//bir sonraki elemana ge� ama �ncekini de sakla
	{
		k=j;		//bu elemana referans verenin indisi
		j=PO[j];	//bu eleman�n referans verdi�inin indisi
	}
	PO[k]=i;		
	PO[i]=j;		//yeni elman s�radaki elemana referans versin
}
// a�a��daki listeye 7 ekleyelim
// elemanEkle (A,6,7,PO);
/*
i A[] 	PO[]
0		5
1 2		3
2 5		4	
3 4		2
4 8		-1
5 1		1

k=0 A[6]=7	j=5		j!=-1 ? T	A[5]<7 ? T
					k=5
					j=1
					j!=-1 ? T	A[1]<7 ? T
					k=1
					j=3
					j!=-1 ? T	A[3]<7 ? T
					k=3
					j=2
					j!=-1 ? T	A[2]<7 ? T
					k=2
					j=4
					j!=-1 ? T	A[4]<7 ? F
					PO[2]=6;		
					PO[6]=4;
					
eger 10 ekleseydik?
					j!=-1 ? T	A[4]<10 ? T
					k=4
					j=-1
					j!=-1 ? F	
					PO[4]=6;		
					PO[6]=-1;
eger -2 ekleseydik?
k=0 A[6]=-2	j=5		j!=-1 ? T	A[5]<-2 ? F
					PO[0]=6;		
					PO[6]=5;
*/			
void elemanSil (int A[],int sil,int PO[])
{
	int k=0,j;
	j=PO[0];
	while ((j!=-1) && (A[j]!=sil))
	{
		k=j;
		j=PO[j];
	}
	if (j==-1)
	{
		printf("Silinecek eleman bulunamadi\n");
		return;
	}
	PO[k]=PO[j];	//bir �nceki eleman bir sonrakini g�stersin
}

void listeleriYazdir(int A[],int PO[],int N)
{
	int i;
	printf("i--A[]--PO[]\n");
	for (i=0;i<=N;i++)
		printf("%d   %d   %d\n",i,A[i],PO[i]);
	
}

void siraliYazdir (int A[],int PO[])
{
	int j;
	j=PO[0];
	printf("i--A[]--PO[]\n");
	while (j!=-1)
	{
		printf("%d  %d  %d\n",j, A[j], PO[j]);
		j=PO[j];
	}
}
