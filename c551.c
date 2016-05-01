#include <stdio.h>
Det(float)
{
  int i=0, j=0, n, D;
  float a[n][n], b[n], d[n], x[n];
  while(i<=n)
   {a[i][n]=b[n];
    i++;}
    if(n==2)
    {while(i<=n)
      {i++;
    d[i]=b[i]*a[i][n]-b[n]*a[n][i];
    D=a[i][i]*a[n][n]-a[n][i]*a[i][n];
    x[i]=d[i]/D;
    printf("%.2f\n", x[i]);}
    }
    else
      {if(n==3)
      {while(i<=n)
        {i++;
        d[i]=(b[i]*a[i+1][i+1]*a[n][n])+(b[i+1]*a[n][i+1]*a[i][n])+(b[n]*a[i+1][n]*a[i+1][i])-(b[i]*a[i+1][i+1]*a[i][n+1])-(a[n][n]*b[i+1]*a[i][i+1])-(b[n]*a[i][i]*a[i+1][n]);
        D=(a[i][i]*a[i+1][i+1]*a[n][n])+(a[i+1][i]*a[n][i+1]*a[i][n])+(a[n][i]*a[i+1][n]*a[i+1][i])-(a[n][i]*a[i+1][i+1]*a[i][n+1])-(a[n][n]*a[i+1][i]*a[i][i+1])-(a[i][i]*a[i+1][n]*a[n][i+1]);
        x[i]=d[i]/D;
        printf("%.2f\n", x[i]);}
      }
      else
        {if(n==1)
         { x[i]=a[n][n];
        printf("%.2f\n", x[i]);}
        else 
          printf(":(\n");}
    }
   return 0;   
}
