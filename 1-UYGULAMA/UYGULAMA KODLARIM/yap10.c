#define N 10
#include <stdio.h>
//kod calýsýyor
//yapýsal 2.uygulama dersi
//soru 5 i daha verimli çözmek için ne yapýlabilir
//transpoz matrisi tutmak yerine diagonal olarak karsýlastýr
int main(){
	int a[N][N],n;
	int i,j;
	int flip;
	
	
	do{
		printf("enter the column size");
		scanf("%d",&n);
	}while(n>N);
	
	printf("enter the elements");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("element[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//print
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		printf("%3d",a[i][j]);
		
		printf("\n");
	}
	flip=0;
	for(i=0;i<n;i++){
		for(j=0;j<i;j++)
		if(a[i][j]!=a[j][i] )
		flip++;
	}
	
	
	printf("number of flip %d",flip);
	return 0;
}
