//Ӳ��շת����� ������ ���� ���� �����ֻ� ǰ�� 
#include <stdio.h>
int main ()
{
	int a, b, r;
	scanf("%d%d",&a,&b);
	do
	{
		r=a%b;
		a=b;
		b=r;
	} while(r!=0);
	printf("���Լ����:%d",a);
	return 0;
}
