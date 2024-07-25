#include <stdio.h>
int EBOB(int n_1,int n_2);

int main(){
	int n1,n2,ebob;
	
	printf("enter your number\n");
	scanf("%d %d",&n1,&n2);
	
	ebob=EBOB(n1,n2);
	
	printf("GCD=%d\n",ebob);
	
	return 0;
}
int EBOB(int n_1,int n_2){
	while(n_1!=n_2){
		if(n_1>n_2){
			return EBOB(n_1-n_2,n_2);
		}
		else{
			return EBOB(n_1,n_2-n_1);
		}
	}
	return n_1;
}
//kod calisiyor
