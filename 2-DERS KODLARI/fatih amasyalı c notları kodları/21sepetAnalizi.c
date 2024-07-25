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
	static int T[10][10];
	int i,j,k;
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
	//	T: �r�nSayisi*�r�nSayisi boyutunda bir matris
	printf("\nurunlerin birlikte satilma sayilari:");
	for (i=0;i<urunSayisi;i++)
		for (j=i+1;j<urunSayisi;j++)
			for (k=0;k<sepetSayisi;k++)
				if ((A[i][k]==1) && (A[j][k]==1))
					T[i][j]++;
	printf("\n");
	for (i=0;i<urunSayisi;i++)
	{
		for (j=0;j<urunSayisi;j++)
			printf("%d ",T[i][j]);
		printf("\n");
	}
	return 0;	

}
