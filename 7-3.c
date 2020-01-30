#include<stdio.h>
int main()
{
	int i,sum = 0;
	printf("i:\n");
	scanf("%d",&i);
	while(i<=100)
	{
	sum+=i;
	i++;	
	}
	printf("sum =%d\n",sum);
	return 0;
}
