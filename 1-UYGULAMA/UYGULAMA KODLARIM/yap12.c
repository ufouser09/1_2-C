 #include <stdio.h>
#include <stdlib.h>
void sum(int colLength,int rowLength,int mOne[rowLength][colLength],int mTwo[rowLength][colLength],int Res[rowLength][colLength]){
	
	int i,j;
	
	for(i=0;i<rowLength;j++){
		for(j=0;j<colLength;j++){
			Res[i][j]=mOne[i][j]+mTwo[i][j];
		}
	}
}
void  sum_Alt(int colLength,int rowLength,int *mOne,int *mTwo,int *Res){
	int i,j;
	
	for(i=0;i<rowLength;i++){
		for(j=0;j<colLength;j++){
			*((Res+i*colLength)+j)=*((mOne+i*colLength)+j)+*((mTwo+i*colLength)+j);
		}
	}
}
void mul(int colLength,int rowLength,int mOne[rowLength][colLength],int mTwo[rowLength][colLength],int Res[rowLength][colLength]){
		
	int i,j;
	
	for(i=0;i<rowLength;j++){
		for(j=0;j<colLength;j++){
			Res[i][j]=mOne[i][j]*mTwo[i][j];
		}
	}
	}
	void dot(int colLength,int rowLength,int mOne[rowLength][colLength],int mTwo[rowLength][colLength],int Res[rowLength][colLength]){
		int i,j,k;
		int tmpSum;
		for(i=0;i<rowLength;i++){
			for(j=0;j<colLength;j++){
				tmpSum=0;
				for(k=0;k<rowLength;k++){
					tmpSum+=mOne[i][k]*mTwo[k][j];
				}
				Res[i][j]=tmpSum;
			}
		}
	}
	int minMax(int colLength,int rowLength,int mOne[rowLength][colLength],int mode){
		int i,j;
		int currMax=mOne[0][0];
		for(i=0;i<rowLength;i++){
			for(j=0;j<colLength;j++){
				if(mode==0){
					if(currMax<mOne[i][j])
					currMax=mOne[i][j];
				}else{
					if(currMax>mOne[i][j])
					currMax=mOne[i][j];
				}
			}
		}
		return currMax;
	}
	
	
	void Norm(int colLength,int rowLength,int mOne[rowLength][colLength],float Res[rowLength][colLength]){
		int i,j;
		int min;
		int max;
		
		min=minMax(colLength,rowLength,mOne,1);
		max=minMax(colLength,rowLength,mOne,0);
		
		for(i=0;i<rowLength;i++){
			for(j=0;j<colLength;j++){
				Res[i][j]=1.0*(mOne[i][j]-min)/(max-min);
			}
		}
		
	}





int main(){
		int m_One[3][3]={{1,2,3},{4,5,6},{7,8,9}};
		int m_Two[3][3]={{1,2,3},{4,5,6},{7,8,9}};	
		int Result[3][3];
		float Res[3][3];
		int i,j;	
		
		//sum(3,3,m_One,m_Two,Result);
		//sum_Alt(3,3,m_One,m_Two,Result);
		//mul(3,3,m_One,m_Two,Result);
		//dot(3,3,m_One,m_Two,Result);
		
		
		/*for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%d",Result[i][j]);
			}
			printf("\n");
		}
		return 0;
	}*/
	Norm(3,3,m_One,Res);
	for(i=0;i<3;i++){
			for(j=0;j<3;j++){
				printf("%f",Res[i][j]);
			}
			printf("\n");
		}
		return 0;
	}
	

//yapýsal uygulama 9.hafta
//soru 1
//matris operasyonlari
//iki matrisin toplami
//iki matrisin carpimi
//iki matrisin ic carpimi
//matrisin normalizasyonu(Min-Max scaling)
//x(new)=x(i)-min(x)/max(x)-min(x)
