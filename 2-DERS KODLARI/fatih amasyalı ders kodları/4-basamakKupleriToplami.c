// 1 ile 1000 aras�nda
// basamaklar�n�n kupleri toplam� kendisine esit olan say�lar� bulal�m
#include <stdio.h>
int main()
{
	int i,num,top,digit;
	for (i=1;i<1000;i++)
	{
		top=0;
		num=i;
		while (num>0)
		{
			digit=num%10;
			top=top+digit*digit*digit;
			num=num/10;	
		
		}
		if (top==i)
			printf("%d\n",i);			
	}
	return 0;
}
