#include <stdio.h>
#include <math.h>
int main()
{
	int n, i,k;
	do{
		scanf("%d",&n);
	}while(n<=0);
	if(n==1)
	{
		printf("��������");
	}
	else
	{
		k=(int)sqrt(n);
		for(i=2;i<=k;i++)
		if(n%i==0)
		{
			break;
		}
	}
	if(i>k)
	{
		printf("%d������",n);
	}
	else
	{
		printf("%d��������",n);
	}
	return 0;
 } 
