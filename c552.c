#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "c551.c"
int main()
{
	int i=0, j=0, n, D;
	printf("введите размерность квадратной матрицы\n");
	scanf("%d", n);
	float a[n][n], b[n], d[n], x[n];
	while(i<=n)
	{
		printf("введите коэффициенты уравнения\n");
		while(j<=n)
        {scanf("%.2f", a[i][j]);
        j++;}
		i++;
	}
    printf("введите столбец свободных членов\n");
    while(i<=n)
    {
    	scanf("%.2f", b[i]);
    	i++;
    }
    printf("корни уравнений \n");
    Det(float);
	return 0;
}