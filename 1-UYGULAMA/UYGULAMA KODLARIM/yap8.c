#define R 10
#define C 10
#include <stdio.h>
//yapýsal 2.uygulama dersi
//matrisin tranpozunu bulunuz
//matrisin boyutu MxN kullanicidan alinmali 
//matris elemanlari kullanicidan alinmali
int main(){
 int a[R][C],T[C][R],m,n;
 int i,j;
 
 do{
 	printf("enter the row size=");
 	scanf("%d",&m);
 	printf("enter the column size=");
 	scanf("%d",&n);
 	
 }while(m>R || n>C);
 
 printf("enter the elements=\n");
 for(i=0;i<m;i++){
 	for(j=0;j<n;j++){
	 
 	printf("element[%d][%d]:\n",i,j);
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
 
 
 //a->mxn  t->nxm
 for(i=0;i<n;i++){
 for(j=0;j<m;j++){
 
 T[i][j]=a[j][i];
}
 
}
printf("result matrix\n");
for(i=0;i<n;i++){
	for(j=0;j<m;j++){
	
	printf("%3d",T[i][j]);
}
	printf("\n");
}
}
//kod da bir problem var
