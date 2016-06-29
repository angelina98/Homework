#include <stdio.h>
#include <math.h>
#include <string.h>
double f1(double);
double f2(double);
double a,b,c,d,t;
int main(){
	double x,x0;
		printf("введите коэффициенты уравнения 3-й степени\n");
		scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
		printf("введите начальное приближение и точность\n");
		scanf("%lf %lf", &x0, &t);
		x=x0;
		if (f1(x)==0)
			printf("решение уравнения: x=%.5f\n",x);
		while(f1(x)>=t){
			x = x-f1(x)/f2(x);
	printf("решение уравнения: x=%.5f\n",x);			
		}

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