#include <stdio.h>
#define N 10
void print (int a[],int n);
int maxnum(int a[],int n);
int minnum(int a[],int n);
double average(int a[],int n);
int main()
{
	int n,i;
	int array[N];
	int max, min;
	double ave;
	do
	{
		printf("������10���ڵķ�����������\n");
		scanf("%d",&n);
	}while(n<0||n>10);
	printf("������%d������\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	print(array,n);
	max=maxnum(array,n);
	min=minnum(array,n);
	ave=average(array,n);
	printf("���ֵΪ��%d\n",max);s
	printf("��СֵΪ��%d\n",min);
	printf("ƽ��ֵΪ��%f\n",ave);
	return 0;
}
void print (int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}
int maxnum(int a[],int n)
{
	int i,max;
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	return max;
}
int minnum(int a[],int n)
{
	int i,min;
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	return min;
}
double average(int a[],int n)
{
	int i,sum,count,min,max;
	double ave;
	for(i=0;i<n;i++)
	{
		if(a[i]!=max&&a[i]!=min)
		{
			sum=sum+a[i];
			count++;
		}
		if(count)
		{
			ave=sum*1.0/count;
		}
	}
	return ave;
}
