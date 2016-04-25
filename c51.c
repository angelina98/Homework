#include <stdio.h>
#include <string.h>
void f(char*,char*);
int main ()
{
	char b[1000], a[1000];
	int c=0;
	while ((a[c]=getchar())!='\n')
		c=c+1;
	a[strlen(a)-1]='\0';
	for (c=0;c<strlen(a)+1;c=c+1)
		f(&a[c], &b[c]);
	//printf("%s",b);
	return 0;
}
void f(char*a, char*b)
{*b=*a;}