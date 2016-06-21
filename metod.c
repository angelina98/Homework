#include <stdio.h>
#include <math.h>
double f1(double);
double f2(double);
double a, b, c, d, t;
int main()
{
	double x, x0;
	printf("введите коэффициенты уравнения 3-й степени\n");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	printf("введите начальное приближение и точность\n");
	scanf("%f %.5f", &x0, &t);
	x=x0;
	while(fabs(x-x0)>t)
	{
		x = x-f1(x)/f2(x);
	}
printf("решение уравнения: x=%.5f\n",x);	
return 0;
}
double f1(double x)
   {
	return a*pow(x,3)+b*(pow(x,2))+c*x+d;
   }
double f2(double x)
   {
	return 3*a*(pow(x,2))+2*b*x+c;           //Производная
   }