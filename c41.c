#include <stdio.h>
#include <math.h>
float max(float,float,float);
float min(float,float,float);
int  main()
{
	float r,g,b,h1,s,v1;
	int v, h;
	printf("введите координаты цвета в RGB\n");
	scanf("%f%f%f", &r,&g,&b);
	r/=255;
	g/=255;
	b/=255;
	float a=max(r, g, b), i=min(r, g, b);
	if (a==i)
		h1=0;
	     else
		     if(a==r)
	         h1=60*((g-b)/(a-i))+6;
         else
    	     if(a==g)
    	     h1=60*((b-r)/(a-i))+2;
    	 else
    	 	 if(a==b)
    	 	 h1=60*((r-g)/(a-i))+4;
    if(a==0)
    	s=0;
     else s=1-(a/i);
     s=s*100;
     v1=a;
     h=h1;
     v=v1*100;
  if (0<=h && h<=360 && 0<=s && s<=100 && v<=10) printf("h=%d s=%.2f v=%d черный\n", h, s, v);
  if (0<=h && h<=360 && s<=15 && v>=65) printf("h=%d s=%.2f v=%d белый\n", h, s, v);
  if (0<=h && h<=360 && s<=15 && 10<=v && v<=65) printf("h=%d s=%.2f v=%d серый\n", h, s, v);
  if (h<=11 && h>=351 && s>=70 && v>=10) printf("h=%d s=%.2f v=%d красный\n", h, s, v); 
  if (h<=11 && h>=351 && s<=70 && v>=10) printf("h=%d s=%.2f v=%d розовый\n", h, s, v);
  if (310<=h && h<=351 && s>=15 && v>=10) printf("h=%d s=%.2f v=%d розовый\n", h, s, v);
  if (11<=h && h<=45 && s>=15 && v>=75) printf("h=%d s=%.2f v=%d оранжевый\n", h, s, v);
  if (11<=h && h<=45 && s>=15 && 10<=v && v<=75) printf("h=%d s=%.2f v=%d коричневый\n", h, s, v);
  if (45<=h && h<=64 && s>=15 && v>=10) printf("h=%d s=%.2f v=%d желтый\n", h, s, v);
  if (64<=h && h<=150 && s>=15 && v>=10) printf("h=%d s=%.2f v=%d зеленый\n", h, s, v);
  if (150<=h && h<=180 && s>=15 && v>=10) printf("h=%d s=%.2f v=%d бирюзовый\n", h, s, v);
  if (180<=h && h<=255 && s>=15 && v>=10) printf("h=%d s=%.2f v=%d синий\n", h, s, v);
  if (255<=h && h<=310 && s>=50 && v>=10) printf("h=%d s=%.2f v=%d фиолетовый\n", h, s, v);
  if (255<=h && h<=310 && 15<=s && s<=50 && v>=10) printf("h=%d s=%.2f v=%d бордовый\n", h, s, v);
	return 0;
}
float max(float r,float g,float b)
{
	float max;
	if (r>=g & r>=b)
	{max=r;}
	else
	{
		if (g>r & g>=b)
		{max=g;}
		else
		{max=b;}
	}
	return max;
}
float min(float r,float g,float b)
{
	float min;
	if (r<=g & r<=b)
	{min =r;}
    else
    {
		if (g<r & g<=b)
		{min=g;}
		else
		{min=b;}
	}
	return min;
}