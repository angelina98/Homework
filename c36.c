#include <stdio.h>
int main()
{
	int a, c;
	printf("задайте прогресс в процентах\n");
	scanf("%d", &a);
	a=a/10;
	printf("[");
	c=1;
	while (c<=a)
	{
		printf("=");
		c++;
	}
	a=10-a;
	c=1;
	while (c<=a)
	{
		printf("_");
		c++;
	}	
	printf("]\n");
	return 0;
}