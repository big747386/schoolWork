//�ݹ麯���������Լ��
#include <stdio.h>
int greatestCommondivisor(int a,int b);
int main ()
{
	int a ,b, gcd;
	scanf("%d%d",&a,&b);
	gcd=greatestCommondivisor(a,b);
	printf("���Լ����:%d",gcd);
	return 0;
}
int greatestCommondivisor(int a,int b)
{
	if (a < b)
	return greatestCommondivisor(b, a);
	if(a%b==0)
	return b;
	else
	return greatestCommondivisor(b,a%b);
}
