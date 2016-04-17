#include <stdio.h>
#include <string.h>
int main()
{
char a[100];
printf("введите число\n");
scanf("%s", a);
printf("количество цифр %zd \n",(strlen(a)));
int c=0;
float d=0;
while (c<strlen(a))
{
d=d+a[c]-48;
c=c+1;
}
printf("сумма цифр %.0f \n", d);
float e=d/strlen(a);
printf("среднее значение %.2f \n", e);
return 0;
}
