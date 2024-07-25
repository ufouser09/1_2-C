#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
void sum(int colLenght, int rowLenght,int mOne[rowLenght][colLenght], int mTwo[rowLenght][colLenght], int Result[rowLenght][colLenght]){
	int i,j;
	for(i=0;i<rowLenght;i++){
		for(j=0;j<colLenght;j++){
			Result[i][j]=mOne[i][j] +mTwo[i][j];
		}}
}

void sum_Alt(int colLenght, int rowLenght, int *mOne,int *mTwo, int *Result){
	int i,j;
	for(i=0;i<rowLenght;i++){
		for(j=0;j<colLenght;j++){
			*((Result+i*colLenght)+j)=*((mOne+i*colLenght)+j)+*((mTwo+i*colLenght)+j);
		}
	}
}int main(){
	int mOne[SIZE][SIZE],mTwo[SIZE][SIZE],Resut[SIZE][SIZE],i,j,n,m;
	printf("Satir sayisi");
	scanf("%d",&n);
	printf("Sutun sayisi");
	scanf("%d",&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf(" mOne[%d][%d]",i+1,j+1);
			scanf("%d",&mOne[i][j]);
			printf(" mTwo[%d][%d]",i+1,j+1);
			scanf("%d",&mTwo[i][j]);
		}
	}
	sum_Alt(n,m,mOne,mTwo,Result);
	for(i=0;i<rowLenght;i++){
		for(j=0;j<colLenght;j++){
			printf("%d\t",Result[i][j]);
		}
		printf("\n");
	}

}
	

