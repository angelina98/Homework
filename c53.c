#include <stdio.h>
#include <string.h>
int main(void)
{
    char b[256];
    printf("введите строку\n");
    scanf("%s",b);
    char a[]="qwertyuiopasdfghjklzxcvbnm`~!@#$%^&*(){}[];'\"\\/,.<>";
    int c[52]={0},i,j,k;
    k=strlen(b);
    for(i=0;i!=k;i++)
    {
        for(j=0;j<52;j++)
        {
            if(a[j]==b[i])
               c[j]=c[j]+1;
                           }
                       }
           for(i=0;i<=k;i++)
           {
           for(j=0;j<52;j++) 
           {
           if(c[j]!=0 && c[j]==i)
           {
           printf("%c ",a[j]);
           }
                    
        }
        }
        printf("\n");
    return( 0);
}