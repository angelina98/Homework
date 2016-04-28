#include <stdio.h>
int main(void)
{
  char k[255], l;
  int i, a=0, b=0, c=0, d=0;
  printf("Введите строку\n");
  scanf("%s", k);
  for(i=0; i<255; i++)
    {l=k[i];
    if(l='(')
      a++;
    else
      if(l='[')
        b++;
      else
        if(l='{')
          c++;
        else
          if(l='<')
            d++;
          else
            if(l=')')
              a--;
            else
              if(l=']')
                b--;
              else
                if(l='}')
                  c--;
                else
                  if(l='>')
                    d--;}
  if (a==0 && b==0 && c==0 && d==0)
    printf("Баланс скобок соблюдён\n");
  else printf("Баланс скобок не соблюдён\n");
  return 0;
}