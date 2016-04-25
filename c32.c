#include <stdio.h>
#include <string.h>
int main()
{
	char b[100];
	int c=0;
	printf("введите строку\n");
	scanf("%s", b);
	printf("%c", b[c]);
	while (c<=strlen(b)-2)
	{
		if (b[c]==b[c+1])
			{c=c+1;}
		else 
				{printf("%c", b[c+1]);
		        c=c+1;}
	}
	printf("\n");
	return 0;	
}