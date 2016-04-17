#include <stdio.h>
#include <string.h>
int main ()
{
int a;
printf("введите длину последовательности\n");
scanf("%d", &a);
int b[a];
int c=0;
while (c<a) 
{
b[c]=((106*b[c])+57)%225;
printf("%.d\n", b[c]);
c=c+1;
}
return 0;
}
