#include <stdio.h>
int main()
{
long c[1000];
long n, i, j, d;
printf("введите высоту треугольника Паскаля\n");
scanf("%ld", &n);
printf("1\n");
while(d<n-1)
{for (i=1; i<=n; ++i)
	c[i]=0;
c[0]=1;
for(j=1; j<=n-1; ++j)
	{for (i=j;i>=1; --i)
		c[i]=c[i-1]+c[i];
	for(i=0; i<=n-1; ++i)
	{
		if(c[i]!=0)
		printf("%ld ", c[i]);
	}
printf("\n");
++d;}	
}
	return 0;
}