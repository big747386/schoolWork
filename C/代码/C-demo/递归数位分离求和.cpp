#include <stdio.h>
int digitSum(int n);
int main()
{
	int n,sum;
	scanf("%d",&n);
	do
	{
		printf("Errors!");
		scanf("%d",&n);
	}while (n<0);
	sum=digitSum(n);
	printf("��������������֮���ǣ�%d",sum);
	return 0;
 } 
 int digitSum(int n)
 {
 	if(n<10)
 	return n;
 	else
 	return n%10 + digitSum(n/10);
 }
