#include <stdio.h>
int main()
{
	int a,b,i,sum,difference,product;
	double quotient,ave;
	scanf("%d%d",&a,&b);
	sum=a+b;
	product=a*b;
	quotient=a*1.0/b;
	difference=a-b;
	ave=(a*1.0+b*1.0)/2;
	printf("���ǵĺ��ǣ�%d\n",sum);
	printf("���ǵĲ��ǣ�%d\n",difference);
	printf("���ǵĻ��ǣ�%d\n",product);
	printf("���ǵ����ǣ�%f\n",quotient);
	printf("���ǵ�ƽ��ֵ�ǣ�%f\n",ave);
	return 0;
}
