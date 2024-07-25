#include <stdio.h>
int main(){
	int N,bas,son,control=1,bas1,bas2,son1,son2,i,yon1,yon2,yon3,yon4,toplam=0,j;
	int A[5][5]={{0,5,30,-20,40},{20,-10,10,5,50},{5,50,-40,15,60},{10,-10,10,-5,70},{15,20,30,-20,0}};
	printf("1-sag\n2-sol\n3-yukari\n4-asagi\nhareketi temsil etmektedir\n");
	printf("matrisin boyutunu giriniz\n");
	scanf("%d",&N);
	
	
	
	while(control!=0){
		printf("baslangic noktanizi giriniz\n");
		scanf("%d %d",&bas1,&bas2);
	
		printf("bitis noktanizi giriniz\n");
		scanf("%d %d",&son1,&son2);
		
		if(A[bas1][bas2]==0 && A[son1][son2]==0){
			control=0;
		}
		else{
			printf("girdiginiz degerlerden birinde ev bulunuyor.tekrar deger giriniz!\n");
		}
	}
	printf("total address: ");
	if(son1-bas1>0){
		//Aþaðý yön
		for(i=0;i<son1-bas1;i++){
			printf("4 ");
			yon1=4;
		}
	}
	else{
		//yukarý yön
		for(i=0;i<bas1-son1;i++){
			printf("3 ");
			yon1=3;
			}
	}
	if(son2-bas2>0){
		//sað yön
		for(i=0;i<son2-bas2;i++){
			printf("1 ");
			yon2=1;
		}
	}
	else{
		//sola yön
		for(i=0;i<bas2-son2;i++){
			printf("2 ");
			yon2=2;
		}
	}
	i=bas1,j=bas2;
	printf("Current Place: %d %d Board value: %d Current Total: %d\n",i,j,A[i][j],toplam);
	printf("Next Move: %d\n",1);
	if(yon1==4 && yon2==1){
		while(i!=son1 &&j!=son2){
			if(A[i+1][j]<A[i][j+1]){
				toplam=toplam+A[i+1][j];
				i++;
				printf("Current Place: %d %d Board value: %d Current Total: %d\n",i,j,A[i][j],toplam);
				printf("Next Move: %d\n",4);
			}
			else{
				toplam=toplam+A[i][j+1];
				j++;
				printf("Current Place: %d %d Board value: %d Current Total: %d\n",i,j,A[i][j],toplam);
				printf("Next Move: %d\n",1);
			}
		}
	}
	if(yon1==4 && yon2==2){
		while(i!=son1 &&j!=son2){
			if(A[i+1][j]<A[i][j-1]){
				toplam=toplam+A[i+1][j];
				i++;
				printf("Current Place: %d %d Board value: %d Current Total: &d\n",i,j,A[i][j],toplam);
				printf("Next Move: %d\n",4);
			}
			else{
				toplam=toplam+A[i][j-1];
				j--;
				printf("Current Place: %d %d Board value: %d Current Total: %d\n",i,j,A[i][j],toplam);
				printf("Next Move: %d\n",2);
			}
		}
	}
	if(yon1==3 && yon2==1){
		while(i!=son1 &&j!=son2){
			if(A[i-1][j]<A[i][j+1]){
				toplam=toplam+A[i-1][j];
				i--;
				printf("Current Place: %d %d Board value: %d Current Total: %d\n",i,j,A[i][j],toplam);
				printf("Next Move: %d\n",3);
			}
			else{
				toplam=toplam+A[i][j+1];
				j++;
				printf("Current Place: %d %d Board value: %d Current Total: %d\n",i,j,A[i][j],toplam);
				printf("Next Move: %d\n",1);
			}
		}
	}
	if(yon1==3 && yon2==2){
		while(i!=son1 &&j!=son2){
			if(A[i-1][j]<A[i][j-1]){
				toplam=toplam+A[i-1][j];
				i--;
				printf("Current Place: %d %d Board value: %d Current Total: %d\n",i,j,A[i][j],toplam);
				printf("Next Move: %d",3);
			}
			else{
				toplam=toplam+A[i][j-1];
				j--;
				printf("Current Place: %d %d Board value: %d Current Total: %d\n",i,j,A[i][j],toplam);
				printf("Next Move: %d\n",2);
			}
		}
	}
	printf("Current Place: %d %d Board value: %d Current Total: %d\n",i,j+1,A[i][j],toplam);
	
	return 0;
	
}
