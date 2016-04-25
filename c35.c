#include <stdio.h>
int main()
{
	float a1, a2, b1, b2, c1, c2, a, b, c;
	printf("введите координаты вершин треугольника\n");
	scanf("%f%f %f%f %f%f", &a1, &a2, &b1, &b2, &c1, &c2);
	a=(a1-b1)*(a1-b1)+(a2-b2)*(a2-b2);
	b=(b1-c1)*(b1-c1)+(b2-c2)*(b2-c2);
	c=(c1-a1)*(c1-a1)+(c2-a2)*(c2-a2);
	if (c=a+b && c!=0 && b!=0 && a!=0)
	{
		printf("треугольник прямоугольный\n");
	}
	else
		{if (b=c+a && c!=0 && b!=0 && a!=0)
		{
			printf("треугольник прямоугольный\n");
		}
		else 
			{if (a=b+c && c!=0 && b!=0 && a!=0)
			{
				printf("треугольник прямоугольный\n");
			}
			else
				printf("треугольник не прямоугольный\n");}}
return 0;
}