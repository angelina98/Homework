#include <stdio.h>
#include <math.h>
#include <string.h>
#include <malloc.h>
double f1(double);
double f2(double);
double a,b,c,d,t,r;
char str[100];
char *n;
double *k,*h;
double x,x0;
int i,j,q,v,o;
int main()
{
		printf("введите уравнение\n");
		n=gets(str);
		o=strlen(str);
		k=(double*)calloc(o,sizeof(double));//Массив коэффициентов при х
		h=(double*)calloc(o,sizeof(double));
		char *istr;
		istr=strtok(str,"+");//Разбиение на подстроки:
        while (istr!= NULL)// Выделение последующих частей
        {
         printf("%s\n",istr);// Вывод очередной выделенной части
             double *g;//Нахождение коэффициентов при х
             g=(double*)calloc(o,sizeof(double));
             g=strtok(istr,"x");
             i=0;
             while (g!=NULL)
             {
                k[i]==g[i];
                if (g=0)
                	k[i]=1;
                i++;
                g=strtok(NULL,"x");
             }
             v=strlen(strtok(istr,"^"))+1;//Нахождение степени х
             q=0;
             char *ptr=strtok(istr,"^");
             while (strtok(istr,"^")!=0)
             {
             strcpy(&h[q],(ptr+v));
             q++;
             }
         istr=strtok(NULL,"+");// Выделение очередной части строки
        }
		printf("введите начальное приближение и точность\n");
		scanf("%lf %lf", &x0, &t);
		x=x0;
		if (f1(x)==0)
			printf("решение уравнения: x=%.5f\n",x);
		while(f1(x)>=t)
		{
			x=x-f1(x)/f2(x);
	        printf("решение уравнения: x=%.5f\n",x);			
		}
	return 0;
}
double f1(double x)
{
	j=0;
	while (j<=i)
	{
		f1(x)==f1(x)+pow(x,h[q])*k[i];
		j++;
	}
	return f1(x);
}
double f2(double x)//Производная
{
	f2(x)==(f1(x+t)-f1(x))/t;
	return f2(x);
}