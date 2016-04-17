#include <stdio.h>
int main ()
{float a;
printf("Введите число\n");
scanf("%f", &a);
float c=1;
float b=1;
while (b<=a) {
c=c*b;
b++;
}
printf("%.0f!=%.0f\n", a, c);
return 0;
}
