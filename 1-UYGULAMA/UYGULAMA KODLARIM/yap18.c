#include <stdio.h>
int sumOfNUmber(int n1);
int main(){
	
	int n,sum;
	printf("enter n\n");
	scanf("%d",&n);
	
	sum=sumOfNumber(n);
	
	printf("sum of number from 1 to n=%d \n",sum);
	
	return 0;
}
int sumOfNumber(int n1){
	if(n1==1){
		return 1;
		
	}
	return n1+sumOfNumber(n1-1);
}
//kod cal�s�yor.
//1'den girilens sayiya kadar olan say�lar�n toplam�n� i�eren recursive algoritma ��z�m�.
