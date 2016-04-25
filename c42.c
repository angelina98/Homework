#include <stdio.h>
#include <math.h>
#include <assert.h>
int main ()
{
char b;
float a, c;
printf("введите пример\n");
scanf("%f%c%f", &a, &b, &c);
if (b=='+')
	{printf("%.2f\n", a+c);}
else 
{
	if (b=='-')
		{printf("=%.2f\n", a-c);}
	else
	{
		if (b=='*')
			{printf("=%.2f\n", a*c);}
		else
		{
			if (b=='%')
				{printf("=%.2f\n",a*c*0.01);}
			else
			{
				if (b=='/')
				{ assert(c!=0);
					printf("=%.2f\n", a/c);}
			    else
			    {
			    	if (b=='^')
			    	{printf("=%.2f\n",pow(a,c));}
			    }
			}

		}
	}
}
return 0;
}