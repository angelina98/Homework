#include <stdio.h>
#include <assert.h>
#include <math.h>
int main()
{
	float a1, b1, c1, d1, A, B;
	char a2, b2, c2, d2;
printf("введите значения комплексных сопротивлений двух элементов\n");
scanf("%f%c%f%c", &a1, &a2, &b1, &b2);
scanf("%f%c%f%c", &c1, &c2, &d1, &d2);
if (a2=='-')b1=-b1;
if (c2=='-')d1=-d1;
A=((a1+c1)*(a1*c1-b1*d1)+(b1+d1)*(a1*d1+c1*b1))/(pow((a1+c1),2)+pow((b1+d1),2));
B=-((b1+d1)*(a1*c1-b1*d1)-(a1+c1)*(a1*d1+c1*b1))/(pow((a1+c1),2)+pow((b1+d1),2));
printf("комплексное сопротивление =%.2f+(%.2f)*i\n", A, B);
	return 0;
}