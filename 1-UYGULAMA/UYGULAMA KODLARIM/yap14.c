#include <stdio.h>
#include <stdlib.h>

void findSubArray_Bad(int *Arr,int len){
	int i,j;
	int Sum;
	for(i=0;i<len;i++){
		Sum=0;
		for(j=i;j<len;j++){
			Sum+=Arr[j];
			if(Sum==0){
				printf("%d.index to %d.index",i,j);
			}
		}
	}
}
int Exists(int *Arr,int Val,int limit){
	int i;
	
	for(i=0;i<limit;i++){
		if(Arr[i]==Val)
		return 0;
	}
	return 1;
}



void findSubArray_Good(int *Arr,int len){
	int prefixSum[len];
	int i,j;
	int Start;
	int End;
	int currSum=Arr[0];
	i=1;
	while((i<len)&&(currSum!=0)&&(Exists(prefixSum,currSum,i-1))){
		prefixSum[i-1]=currSum;
		currSum+=Arr[i];
		i++;
	}
	if(i==len){
		printf("no sub Array");
		return;
	}else if(currSum==0){
		i--;
		End=i;
		currSum=Arr[i];
		while(currSum!=0){
			i--;
			currSum+=Arr[i];
		}
		Start=i;
	}else{
		End=i--;
		while(prefixSum[i]!=currSum)
			i--;
			Start=i-1;
	}
		printf("from %d to %d",Start,End);
	}
	






int main(){
	int Arr[7]={1,5,-2,-1,-1,1,3};
	int len=7;
	int i,j;
	
	//findSubArray_Bad(Arr,len);
	findSubArray_Good(Arr,len);
	
}
//bir dizide toplami 0 olan sub Array
//-1,4,-2,-2,5,-4,3 dizisinde sonuc 4,-2,-2 olmali(ya da 1.indexten 3.indexe)
