#include <stdio.h>
int main(int argc,char** argv){
	int i, j=1, k=0;
	for(i=1;i<=20;i++){
		if(i%2==0){
			k+=i;
		}
		else{
			j*=i;
		}
		
	}
	printf("carpim = %d\n",j);
	printf("toplam = %d\n",k);
	return 0;
}

