#include <stdio.h>
int main()
{
float a, v;
printf("введите скорость камня (м/с) и угол броска (П/n)\n");
scanf("%f %f", &v, &a);
a=a-((a*a*a)/6)+((a*a*a*a*a)/120)-((a*a*a*a*a*a*a)/5040);
float t=((2*v)*a)/10;
printf("время полета камня %.2f секунд\n", t);
return 0;
}
