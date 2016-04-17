#include <stdio.h>
int main ()
{
float a, b;
printf("Введите 2 числа\n");
scanf("%f %f", &a,&b);
printf("сумма %.0f\n",(a+b));
printf("разность %.0f\n",(a-b));
printf("произведение %.0f\n",(a*b));
printf("частное %.2f\n",(a/b));
return 0;
}
