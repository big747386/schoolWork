//��Ҫ��������ָ����,f1��ʾFn-2,f2��ʾFn-1,fn��ʾ��ǰ��,�����õ�����ԭ�� 
#include <stdio.h>
int main ()
{
	int f1,f2,f3,n,i;
	scanf("%d",&n);
	f1=1;
	f2=1;
	printf("%d %d ",f1,f2);
	for(i=2;i<n;i++)
	{
		f3=f1+f2;
		printf("%d ",f3);
		f1=f2;
		f2=f3;
	
	}
	return 0;
 } 
