// Counting sort da eleman tekrar� problemini cozelim
#include <stdio.h>
int main()
{
	int dizi[10],dizi2[10];
	static int k[10];
	int i,j,n,max=0;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&dizi[i]);
		if (dizi[i]>max)
			max=dizi[i];
	}
	for (i=0;i<n;i++)
		k[dizi[i]]++;
	
	j=0;
	for (i=0;i<=max;i++)
		while (k[i]!=0)
		{
			dizi2[j]=i;
			j++;
			k[i]--;
		}
		
		
	for (i=0;i<n;i++)
		printf("%d ",dizi2[i])	;
	
	return 0;

}
