#include <stdio.h>
#define N  3 
int main ()
{
	double array[N];
	int i,count=0;
	double sum=0;
	for(i=0;i<N;i++)
	{
		scanf("%lf",&array[i]);
		sum += array[i];
		count++;
	}
	printf("�����%d��ѧ���ĳɼ���ƽ����Ϊ%f",count,double(sum/count));
	return 0;
}
