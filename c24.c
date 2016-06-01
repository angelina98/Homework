#include <stdio.h>
#include <string.h>
int main()
{
char b[10000];
scanf ("%s", b);
int a=strlen(b);
int c=0;
while (c<(a+1)) {
if (b[c]>96) {
if (b[c]<123) {
b[c]=b[c]-32;
}
}
c++;
}
printf ("%s\n", b);
return 0;
}