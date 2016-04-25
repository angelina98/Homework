#include <stdio.h>
#include <string.h>
int main()
{char b[128];
	int c=33;
	 printf(" nul| soh| stx| etx| eot| enq| ack| bel|  bs| tab|\n""  lf|  vt|  ff|  cr|  so|  si| dle| dc1| dc2| dc3|\n");
	 printf(" dc4| nak| syn| etb| can| em | sub| esc|  fs|  gs|\n""  rs|  us|(sp)|");
	while (c>=33 && c<=126)
	{
		if (c%10==0)
			{printf("\n");}
		printf("   %c|", c);
		c++;
    }
    printf(" del|\n");
printf("\n");
return 0;
}
