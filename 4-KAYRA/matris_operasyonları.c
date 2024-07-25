#include <stdio.h>
#include <stdlib.h>

void sum(int colLenght, int rowLenght, int mOne[rowLenght][colLenght],int mTwo[rowLenght][colLenght],int Res[rowLenght][colLenght]) {
	int i,j;
	for(i=1;i<=rowLenght;i++){
		for(j=1;j<=colLenght;j++){
			Res[i][j]=mOne[i][j]+mTwo[i][j];
		}
	}
}
void sum_Alt(int colLenght, int rowlenght, int *mOne, int *mTwo, int *Res){
	int i,j;
	for(i=1;i<=rowLenght;i++){
		for(j=1;j<=colLenght;j++){
			*((Res+i*colLenght)+j)=*((mOne+i*colLenght)+j)+*((mTwo+i*colLenght)+j);
	}
}
}


int main(void){
	int k[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int m[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int t[3][3];
	int i,j;
	
	
	
	sum_Alt(3,3,mOne,mTwo,Res);
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			printf("%d\t",t[i][j]);
		}
		printf("\n");
	}
}

