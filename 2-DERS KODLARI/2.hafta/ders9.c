#include <stdio.h>
int main(){
	int i;
	float a,b,y;
	for(i=100;i<999;i++){
		y=(float)i/100;
		a=(i-(float)(y*100))/10;
		b=i% 10;
	
	if(y*y*y+a*a*a+b*b*b==i){
		printf("%d",i);
	}
}
	return 0;
}
//kod calýsmýyor
