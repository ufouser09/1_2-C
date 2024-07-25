#include <stdio.h>
//uygulama ders 1
//[1:20]arasindaki tek sayilarin carpimini,cift sayilarin toplamini hesaplayan programi c dilinde kodlayalým.
int main(int argc,char** argv){
	int i,tek_carpim=1,cift_toplam=0;
	
	for(i=1;i<=20;i++){
		if(i%2==0){
			cift_toplam +=i;
			
		}
		else{
			tek_carpim *=i;
		}
	}
	printf("ciftlerin toplami=%d \n",cift_toplam);
	printf("teklerin carpimi=%d \n",tek_carpim);
	
	return 0;
}
//anlasýldý
//deneme ve compile yapildi
