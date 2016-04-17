#include <stdio.h>
#include <string.h>
int main ()
{
char b[10000];
scanf("%s", b);
int a=strlen(b)+1;
printf("Size of this string is %d\n", a);
return 0;
}
