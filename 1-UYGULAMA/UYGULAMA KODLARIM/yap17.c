#include <stdio.h>

int countDigits(int number1);

int main(){
	
	int number,digit;
	
	printf("enter your number\n");
	scanf("%d",&number);
	
	digit=countDigits(number);
	
	printf("%d Digits in your number\n",digit);
	
	return 0;
}
int countDigits(int number1){
	if(number1>0){
		return 1+countDigits(number1/10);
		
	}
	return 0;
}
//kod calýsiyor
