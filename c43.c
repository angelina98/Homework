#include <stdio.h>
int f(int);
int main()
{
	int c,a;
	printf("введите количество чисел\n");
	scanf("%d", &c);
	f(c);
	for (a=0;a<c;++a)
		{printf("%d-й член последовательности|%d\n",a+1,f(a));
	printf("------------------------------------\n");}
return 0;
}
int f(int c)
{
	if (c==0)
		return 1;
	else
		if (c==1)
			return 1;
		else return (f(c-1)+f(c-2));
}