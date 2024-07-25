#define R 10
#define C 10
#include <stdio.h>
//yapsaýl 2.uyugulama sorularý
//MxN boyutlu bir matrisin spiral formunun i.elmenaini yazdiriniz
//kullanicidan bir index alýnmalidir
//matrisin spiral formu alýnmali ve ilgili indexteki eleman yazdýrýlmalidir
//input i=6
//output=10
int main(){
	int a[R][C],m,n;
	int i,j;
	int c;
	int k,l,count;
	
	do{
		printf("enter the row size");
		scanf("%d",&m);
		printf("enter the column size");
		scanf("%d",&n);
	}while(m>R || n>C);
	
	printf("enter the elements");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("element[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//print
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		
		printf("%3d",a[i][j]);
	}
		printf("\n");
		
	}
	k=0;
	l=0;
	count=0;
	
	printf("enter c:");
	scanf("%d",&c);
	while("k<m && l<n"){
		for(i=1;i<n;i++){
			count++;
			
			if(count==c)
			printf("%d",a[k][i]);
		}
		k++;
		
		for(i=k;i<m;i++){
			count++;
			if(count==c)
			printf("%d",a[i][n-1]);
			
		
		}
		n--;
		if(k<m){
			for(i=n-1;i>=l;i--){
				count++;
				if(count==c)
				printf("%d",a[m-1][i]);
			}
			m--;
		}
		if(l<n){
			for(i=m-1;i>=k;i--){
				count++;
				if(count==c)
				printf("%d",a[i][l]);
			}
			l++;
		}
	}
	return 0;
}
