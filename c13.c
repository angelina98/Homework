#include <stdio.h>
int main ()
{
int day=2,month=3, a;
printf ("0%d/0%d\n", day, month);
a=day;
day=month;
month=a;
printf ("0%d/0%d\n", day, month);
return 0;
}
