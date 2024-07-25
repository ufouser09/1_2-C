#include <stdio.h>
void reverseStr(char* str1);

int main(){
	char str[50];
	printf("enter your String\n");
	scanf("%s",str);
	
	reverseStr(str);
	
	printf("\n"); 
	return 0;
}
void reverseStr(char* str1){
	if(*str1!='\0'){
		reverseStr(str1+1);
	}
	printf("%c",*str1);
}
//kod calisiyor
