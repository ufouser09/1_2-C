#include <stdio.h>
#include <stdlib.h>

void Brute(int *Arr,int len){
	//degiskenlerimizi tan�mlad�k
	int i,j;
	int currNumber;
	int currSeq;
	int Max=0;
	int Start;
	//len burda dizimin boyutu ve onun sonuna kadar git demek oluyor bu 
	for(i=0;i<len;i++){
		
	j=0;
	currSeq=1;
	currNumber=Arr[i];
	//j baslang�c indisimiz len ise dizimizin boyutu 
	while(j<len){
		if(Arr[j]-1==currNumber){
			currNumber+=1;
			currSeq+=1;
			j=0;
		}else{
			j++;
		}
	}	
	if(Max<currSeq){
		Max=currSeq;
		Start=Arr[i];
	}
	
}
printf("longest sequance");
for(i=0;i<Max;i++)
printf("%d ",Start+i);

}
void Sorted(int *Arr,int len){
	int i;
	int Max=0;
	int Start=0;
	int End;
	int currSeq=1;
	for(i=0;i<len;i++){
		if(Arr[i]+1==Arr[i+1]){
			currSeq++;
		}else{
			if(currSeq>Max){
				End=i;
				Max=currSeq;
				currSeq=1;
			}
		}
	}
	printf("longest sequance");
	
	for(i=0;i<Max;i++){
		printf("%d ",Arr[(End-Max)+i+1]);
	}
}


int main(){
	//int Arr[6]={199,198,200,1,0,2};
	//degiskenlerimizi tan�mlad�k
	int Arr[6]={1,2,3,4,100,200};
	int len=6;
	int i,j;
	//Brute(Arr,len);
	//sorted fonksiyonuna arr ve len parametrelerini atad�k
	Sorted(Arr,len);
}
//yap�sal 9.hafta soru 4
//bir dizide bulunan en uzun devaml� dizi
//[100,4,200,1,3,2]gibi verilen bir dizide istenilen sonuc[1,2,3,4]
