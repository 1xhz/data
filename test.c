#include<stdio.h>
int main()
{
	int i=0,j=0;
	for(i=0;i<5;i++)
	{
		printf("i=%d\n",i);
		for(j=0;j<5;j++)
		{
				printf("j=%d\n",j);
			if(j==2)break;
		}
	}
}
