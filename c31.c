#include <stdio.h>
#include <string.h>
int main()
{
	char b[100];
	int a=0, c=1;
	printf("введите строку\n");
	scanf("%s", b);
	while (c<=strlen(b))
	{
		if (b[c]>a)
			a=b[c];
		c++;
	}
	printf("наибольший ASCII код у %c\n",a);
	return 0;
}