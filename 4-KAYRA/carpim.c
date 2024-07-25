#include <stdio.h>
#include <stdlib.h>

void mul(int colLenght, int rowLenght, int mOne[rowLenght][colLenght],int mTwo[rowLenght][colLenght],int Res[rowLenght][colLenght]){
		int i,j;
	for(i=0;i<rowLenght;i++){
		for(j=0;j<colLenght;j++){
			Res[i][j]=mOne[i][j]*mTwo[i][j];
		}
	}
}
void ic(int colLenght, int rowLenght, int mOne[rowLenght][colLenght],int mTwo[rowLenght][colLenght],int Res[rowLenght][colLenght] ){
	int i,j,sum,k;
		for(i=0;i<rowLenght;i++){
		for(j=0;j<colLenght;j++){
			sum=0;
			for(k=0;k<rowLenght;k++){
			sum+=mOne[i][k]*mTwo[k][j];
		}
		Res[i][j]=sum;
		}
	}
}
int main(){
	int mOne[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int mTwo[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int Res[3][3];
	int i,j;
	ic(3,3,mOne,mTwo,Res);
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",Res[i][j]);
		}
		printf("\n");
	}
}

