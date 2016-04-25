#include <stdio.h>
#define MAX(n1,n2) ((n1>n2)?n1:n2)
int f(int);
int main ()
{
  int a;
  printf("введите количество пар чисел\n");
  scanf("%d", &a);
  f(a);
  return 0;
}
int f(int a)
{
	int c=1, n1, n2, b[a];
while (c<=a) 
  { n1=((106*b[c])+57)%225;
    n2=((106*b[c+57])+57)%225;
    printf("%.d %.d |", n1, n2);
    printf("%.d\n", MAX(n1,n2));
    c=c+1;}
}