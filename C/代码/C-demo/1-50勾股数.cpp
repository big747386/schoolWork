//������ٷ� ����ѭ��Ƕ�� ����xyz ������Χ����1-50 ʵ������ (x*x+y*y==z*z)&&(x<y)&&(y<z)
#include <stdio.h>
int main ()
{
	int x, y ,z;
	for(x=1;x<=50;x++)
	{
		for(y=1;y<=50;y++)
		{
			for(z=1;z<=50;z++)
			{
				if((x*x+y*y==z*z)&&(x<y)&&(y<z))
				{
					printf("%d %d %d\n",x,y,z);
				}
			}
		}
	}
	return 0;
 } 
