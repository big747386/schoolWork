//floor��������൱����ȥ����С�������������������ڸ�������С����
//����3.14�������double�͵�3
#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, i, k, j, m, n, r;
	printf("�����������ӡ�����ε�������");
	scanf("%d",&a); 
	b=a-1;
	for(i=1;i<=(floor(b/2)+1);i++)
	{
		for(k=1;k<=floor(b/2)-i+1;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(m=floor(b/2);m>=1;m--)
	{
		for(n=1;n<=(floor(b/2)-m+1);n++)
		{
			printf(" ");
		}
		for(r=1;r<=2*m-1;r++)
		{	printf("*"); }
		printf("\n");
	}
	return 0;
}
