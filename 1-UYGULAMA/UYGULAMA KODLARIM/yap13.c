#include <stdio.h>
#include <stdlib.h>
void DoubleLoop(int *Arr,int len){
	int i,j;
	
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(Arr[i]!=-1){
				if(Arr[i]==Arr[j]){
					Arr[j]=-1;
				}
			}
		}
	}
	i=0;
	j=0;
	while(i<len){
		if(Arr[i]!=-1){
			Arr[j]=Arr[i];
			i++;
			j++;
		
		}else{
			i++;
		}
	}
	for(i=j;i<len;i++){
		Arr[i]=-1;
	}
}
void Sorted(int* Arr,int len){
	int i=1,j=0;
	
	while(i<len){
		if(Arr[i]==Arr[j]){
			i++;
		}else{
			j++;
			Arr[j]=Arr[i];
			i++;
		}
	}
	for(i=j+1;i<len;i++){
		Arr[i]=-1;
	}
}



//val%Bucket_count=hashing fonksiyonu



int main(){
	int Arr[13]={1,1,2,2,2,3,4,4,4,4,5,5,5};
	int i;
	int len=13;
	
	//DoubleLoop(Arr,len);
	Sorted(Arr,len);
	
	
	for(i=0;i<len;i++){
		printf("%d ",Arr[i]);
	}
	
}
//yapýsal 9.hafta 2.soru
//dizide tekrar eden elemanlarin atilmasi
