#include <stdio.h>
int main()
{
int a;
a=sizeof(a);
printf("int - %d байт\n", a);
char b;
int e;
e=sizeof(b);
printf("char - %d байт\n", e);
float c;
int j;
j=sizeof(c);
printf("float - %d байт\n", j);
double d;
int h;
h=sizeof(d);
printf("double - %d байт\n", h);
return 0;
}
