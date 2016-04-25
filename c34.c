#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, d, x;
	printf("введите коэффициенты квадратного уравнения\n");
	scanf("%f %f %f", &a, &b, &c);
	d=b*b-4*a*c;
	if (d<0)
	     printf("нет решений\n");	/* code */
	else
		if (d==0){
		 	x=-(b/(2*a));
		 	printf("x=%.2f\n", x);
		 	}
		 else
		if (d>0){
		 	d=sqrt(d);
		 	x=(-b+d)/(2*a);
		 	printf("x=%.2f\n", x);
		 	x=(-b-d)/(2*a);
		 	printf("x=%.2f\n", x);
			}
	return 0;
}