#include <stdio.h>
int main()
{
	int a, b;
	printf("введите 2 числа\n");
	scanf("%d %d", &a, &b);
	while (a!=0 & b!=0)
	{
		if (a>b)
			a=a%b;
		else 
			b=b%a;
	}
	printf("нод=%d\n", (a+b));
	return 0;
}