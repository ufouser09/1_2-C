#include <stdio.h>
int main()
{
	// S: sepetID, �r�nID�leri tutan bir matris. N sat�r, 2 s�tun
	int S[10][2]={	{1,2},
					{2,1},
					{2,4},
					{2,2},
					{1,4},
					{1,0},
					{1,3},
					{0,0}};
	int N=8;
	int urunSayisi=5;
	int sepetSayisi=3;
	// 	A: hangi �r�nlerin, hangi sepetlerde oldu�unu g�steren sadece 1 ve 0�lardan olu�an bir matris. 
	static int A[10][10];
	static int T[10][10][10];
	int i,j,k,m;
	for (i=0;i<N;i++)
		A[S[i][1]][S[i][0]]=1;
	printf("urunlerin bulunduklari sapetler:\n");
	for (i=0;i<urunSayisi;i++)
	{
		for (j=0;j<sepetSayisi;j++)
			printf("%d ",A[i][j]);
		printf("\n");
	}
	//	T: hangi �r�nlerin hangi �r�nlerle birlikte ka� kez sat�ld�klar�n� g�stersin. 
	//	T: �r�nSayisi*�r�nSayisi*�r�nSayisi boyutunda bir matris
	printf("\nurunlerin birlikte satilma sayilari:");
	for (i=0;i<urunSayisi;i++)
		for (j=i+1;j<urunSayisi;j++)
			for (k=j+1;k<urunSayisi;k++)
				for (m=0;m<sepetSayisi;m++)
					T[i][j][k]=T[i][j][k]+A[i][m]*A[j][m]*A[k][m];
	printf("\n");
	for (i=0;i<urunSayisi;i++)
		for (j=0;j<urunSayisi;j++)
			for (k=0;k<urunSayisi;k++)
				printf("%d - %d - %d adet:%d\n",i,j,k,T[i][j][k]);
	return 0;	

}
