#include <stdio.h>
int main(){
	int i,j,k,counter=0,dongu,N,M,max;
	
	while(dongu!=3){
		printf("menu\n");
		printf("(1) Seyrek matristen sikistirilmis matrise.\n");
		printf("(2) sikistirilmis matristen seyrek matrise.\n");
		printf("(3) Cikis\n");
		scanf("%d",&dongu);
		
		if(dongu==1){
			printf("matrisin boyutlarini giriniz\n");
			scanf("%d %d",&N,&M);
			
			int matrisA[N][M]; 
			printf("Matrisin elemanlarini giriniz:\n");
			for(i=0;i<N;i++){
				for(j=0;j<M;j++){
					printf("[%d][%d]=",i,j);
					scanf("%d",&matrisA[i][j]);
				}
			}
			for(i=0;i<N;i++){
				for(j=0;j<M;j++){
					
				if(matrisA[i][j]!=0){
					counter++;
				}	
				}
			}
				int matrisB[counter][3];
			k=0;
			for(i=0;i<N;i++){
				for(j=0;j<M;j++){
					if(matrisA[i][j]!=0){
						matrisB[k][0]=i;
						matrisB[k][1]=j;
						matrisB[k][2]=matrisA[i][j];
						k++;
					}
				}
			}
			printf("Sikistirilmis Matris:\n");
			for(i=0;i<counter;i++){
				for(j=0;j<3;j++){
					printf("%d ",matrisB[i][j]);	
				}
				printf("\n");
			}
			
		}
		else if(dongu==2){
			printf("Matriste kac tane sifirdan farkli eleman var?\n");
			scanf("%d",&counter);
			int matrisB[counter][3];
			
			for(i=0;i<counter;i++){
					printf("%d. eleman icin satir,sutun ve degeri giriniz:\n",i+1);
					scanf("%d %d %d",&matrisB[i][0],&matrisB[i][1],&matrisB[i][2]);
			}
			printf("Sikistirilmis matris:\n");
			
			for(i=0;i<counter;i++){
				for(j=0;j<3;j++){
						printf("%d ",matrisB[i][j]);
				}
				printf("\n");
			}
			
			max=matrisB[0][0];
			for(i=0;i<counter;i++){
				for(j=0;j<2;j++){
					if(matrisB[i][j]>max){
						max=matrisB[i][j];
					}
				}
			}
			
			int matrisA[max+1][max+1];
			for(i=0;i<max+1;i++){
				for(j=0;j<max+1;j++){
					matrisA[i][j]=0;
				}
			}
			
			for(i=0;i<counter;i++){
				matrisA[matrisB[i][0]][matrisB[i][1]]=matrisB[i][2];
			}
			
			printf("Seyrek Matris:\n");
			for(i=0;i<max+1;i++){
				for(j=0;j<max+1;j++){
					printf("%d ",matrisA[i][j]);
				}
				printf("\n");
			}
		}
	}
	
	return 0;
}
