#include <stdio.h>
#include <math.h>
#include <string.h>
double f1(double);
double f2(double);
double a,b,c,d,t,r;
char str[50],*n;
int main(){
	double x,x0;
		printf("введите уравнение\n");
		scanf("%s",str);
		printf("введите начальное приближение и точность\n");
		scanf("%lf %lf", &x0, &t);
		f1(x)==0;
		f2(x)==0;
		x=x0;
		if (f1(x)==0)
			printf("решение уравнения: x=%.5f\n",x);
		while(f1(x)>=t)
		{
			x = x-f1(x)/f2(x);
	        printf("решение уравнения: x=%.5f\n",x);			
		}

	return 0;
}
double f1(double x)
{
	n=strtok(str, "+-"); 
		while (n)
		{
			f1(x)=f1(x)+n; 
			n=strtok("+-");
		}
	return f1(x);
}
double f2(double x)
{
	n=strtok(str, "+-"); 
		while (n)
		{   switch(n)
          {
          	case "cosf(x)": r=-sinf(x); 
           continue; 
           case "sinf(x)": r=cosf(x); 
           continue; 
           case "tgf(x)": r=1/(pow(cosf(x),2));
           continue;
           case "ctgf(x)": r=-1/(pow(sinf(x),2))
          }
			f2(x)=f2(x)+r; 
			n=strtok("+-");
		}
	return f2(x);
}