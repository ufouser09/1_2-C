#include <stdio.h>
#include <math.h>
void ClosestPoints(int(*)[5],int,int(*)[5],int,int*,int*);
void ClosestPointsV2(int(*)[50],int,int(*)[50],int,int,int*,int*);
void ClosestPointsV3(int(*)[50],int,int(*)[50],int,int,int*,int*);
int FindDistance (int,int,char);
	
int main()
{
	int E[50][50], K[50][50];
	int N, M, ind1,ind2,k,i,j; 
	
	printf("ilk matrisin kayit sayisi?\n");
	scanf ("%d",&N);
	printf("ikinci matrisin kayit sayisi?\n");
	scanf ("%d",&M);
	printf("sutun sayisi?\n");
	scanf ("%d",&k);
	
	printf("ilk matrisin elemanlari?\n");
	for (i=0;i<N;i++)
		for (j=0;j<k;j++)
			scanf ("%d",&E[i][j]);
		
	printf("ikinci matrisin elemanlari?\n");
	for (i=0;i<M;i++)
		for (j=0;j<k;j++)
			scanf ("%d",&K[i][j]);
	
	ClosestPoints(E,N,K,M,&ind1,&ind2);	//iki sutunlu matrisler icin birbirine en yakin noktalar�n indislerini bulal�m
//	ClosestPointsV2(E,N,K,M,k,&ind1,&ind2); // copcatan sitesi yapal�m. K adet n�merik soru icin uzaklik hesaplans�n
//	ClosestPointsV3(E,N,K,M,k,&ind1,&ind2);	// copcatan sitesi yapal�m. K adet kategorik soru icin uzaklik hesaplans�n

	printf("En yakin noktalar�n indisleri:%d - %d\n",ind1,ind2);
	return 0;	
}

/* 	E hava yollar�ne ait u�aklar�n enlem ve boylam bilgisi E matrisinde (E[N][2]), 
	K hava yollar�ne ait u�aklar�n enlem ve boylam bilgisi K matrisinde (K[M][2]), 
	Birbirine en yak�n u�aklar�n indislerini bulan fonksiyon
*/
//�ki boyutlu veri i�in 
ClosestPoints(int E[][50],int N,int K[][50], int M,int *ind1,int *ind2)
{
	int i,j,distMin=100000,dist;
	for (i=0;i<N;i++)
		for (j=0;j<M;j++)
		{
			dist=abs(E[i][0]-K[j][0])+abs(E[i][1]-K[j][1]);
			if (dist<distMin)
			{
				distMin=dist;
				*ind1=i;
				*ind2=j;
			}
				
		}
}

/* ��p�atan sitesi yapal�m. N erkek, M kad�n dim soru
Sorular ��yle: Ayda ka� g�n sinemaya gidersiniz? Tiyatro izlemeyi ne kadar seversiniz (1-5 aras� puanlay�n) Haftada ka� sayfa kitap okursunuz?
Erkeklerin cevaplar� E[N][dim],  Kad�nlar�n cevaplar� K[M][dim], 
Birbirine en uygun �ift?
*/
// dim boyutlu veri i�in
void ClosestPointsV2(int E[][50],int N,int K[][50], int M,int dim,int *ind1,int *ind2)
{
	int i,j,k,distMin=100000,dist=0;
	for (i=0;i<N;i++)
		for (j=0;j<M;j++)
		{
			for (k=0;k<dim;k++)
				dist+=abs(E[i][k]-K[j][k]); //dist+=FindDistance(E[i][k],K[j][k],'n');
			if (dist<distMin)
			{
				distMin=dist;
				*ind1=i;
				*ind2=j;
			}
			dist=0;	
		}
}

/*
��p�atan sitesinde sorular de�i�mi�. N�merik de�il kategorik sorular gelmi�. Sorular ��yle:
Otostop �eken birini g�rseniz ne yapars�n�z?
 1)H�zlan�r�m 2)Durup otostop yapman�n her iki taraf i�in de tehlikeli oldu�unu s�ylerim 3)Durup arabaya al�r�m
Ne t�r film izlemeyi seversiniz?
 1)Korku  2)Romantik Komedi 3)Polisiye 4)Bilim Kurgu
 
Cevaplar aras�nda n�merik distance bulmak mant�ks�z. Ayn� soruya ayn� cevab� vermi� mi diye bakmal�y�m. �yleyse distance metri�im de�i�meli
*/
// dim boyutlu veri i�in Distance Metri�i Farkl�
void ClosestPointsV3(int E[][50],int N,int K[][50], int M,int dim,int *ind1,int *ind2)
{
	int i,j,k,distMin=100000,dist=0;
	for (i=0;i<N;i++)
		for (j=0;j<M;j++)
		{
			for (k=0;k<dim;k++)
				dist+=FindDistance(E[i][k],K[j][k],'c');
			if (dist<distMin)
			{
				distMin=dist;
				*ind1=i;
				*ind2=j;
			}
			dist=0;	
		}
}

int FindDistance (int point1,int point2,char type)
{
	if (type=='c') //categorical
	{
		if (point1==point2)
			return 0;
		else 
			return 1;
	}
	else	// numerical
		return abs(point1-point2);
	
}

