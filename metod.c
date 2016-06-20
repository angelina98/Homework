#include <stdio.h>
#include <math.h>
float f1(double);
float f2(double);
int main()
{
	float a, b, c, d, t;
	double x, x0;
	printf("введите коэффициенты уравнения 3-й степени\n");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	printf("введите начальное приближение и точность\n");
	scanf("%f %f", x0, t);
	x=x0;
	while(fabs(x-x0)<t && fabs(f1(x))<t)
	{
		x0 = x;
		x = x0 - f1(x)/f2(x);
	}
printf("решение уравнения: x=%f\n",x);	
return 0;
}
float f1(double x)
   {
   	float a, b, c, d;
	return a*pow(x,3)+b*(pow(x,2))+c*x+d;
   }
float f2(double x)
   {
   	float a, b, c, d;
	return 3*a*(pow(x,2))+2*b*x+c;           //Производная
   }