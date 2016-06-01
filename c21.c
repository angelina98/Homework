#include <stdio.h>
int main ()
{
int a, years, months, days;
printf ("Enter the quantity of days\n");
scanf("%d",&a);
years=a/365;
printf ("years=%d\n",years);
months=a%365/31;
printf ("months=%d\n",months);
days=a%365%31;
printf ("days=%d\n",days);
return 0;
}