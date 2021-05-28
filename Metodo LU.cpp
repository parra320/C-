#include <stdio.h>
#include <stdlib.h>
#define MAX 10

using namespace std;

int lu();

int main(void)
{
	lu();
	
	system ("pause");
	return 0;
}

int lu()
{
	FILE *matriz;
	FILE *independiente;
	int i, j, k, n;
	char Line[80];
	double **a, *b, sum, u[MAX][MAX], l[MAX][MAX], y[MAX], x[MAX];
	
	matriz = fopen("A.dat","rt");
	fgets(Line, 80, matriz);
	sscanf(Line, "%d", &n);
	printf("\n	N = %3d\n\n 	Matriz Principal\n\n", n);
	
	a = (double **)malloc(n*sizeof(double*));
	
	for(i=0;i<n;i++)
		a[i] = (double *)malloc(n*sizeof(double));
	 
		for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
					{
						fgets(Line, 80, matriz);
						sscanf(Line, "%lf", &a[i][j]);
					}
			}
	
	independiente = fopen("B1.dat","rt");
	fgets(Line, 80, independiente);
	sscanf(Line, "%d", &n);
	
	b = (double *)malloc(n*sizeof(double));
	
	for(i=0;i<n;i++)
		{
			fgets(Line, 80, independiente);
			sscanf(Line, "%lf", &b[i]);
		}
			
		for(i=0;i<n;i++)
		{
			printf("	|");
			for(j=0;j<n;j++)
				{
					printf(" %10.6lf  ", a[i][j]);
				}
				printf(" | | x[%d] |  | %10.6lf |", i , b[i]);
				printf("\n");
		}
	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(i>j) 
			{
			  u[i][j]=0;
			}
			else if(i==j) 
			{
			  l[i][j]=1;
			}
			else 
			{
			  l[i][j]=0;
			}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=0;
			if(i<=j)
			{
				for(k=0;k<n;k++) 
					if(k!=i)
						sum=sum+l[i][k]*u[k][j];
				        u[i][j]=a[i][j]-sum;
			}
			else 
			{
				for(k=0;k<n;k++)
					if(k!=j)
						sum=sum+l[i][k]*u[k][j];
					l[i][j]=(a[i][j]-sum)/u[j][j];
			}
		}
	}

        printf("\n\n L =");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
                          
                        printf ("%10.3lf",l[i][j]);
 			printf("\n    ");
	}
    
        printf("\n\n U =");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
            printf ("%10.3lf",u[i][j]);
 			printf("\n    ");
	}
	
	y[0]=b[0]/l[0][0];
	for(i=1;i<n;i++)
	{
		sum=0;
		for(j=0;j<i;j++)
		{
			sum=sum+y[j]*l[i][j];
			
		}
		y[i]=b[i]-sum;
	}

	x[n-1]=y[n-1]/u[n-1][n-1];
	for(i=n-2;i>=0;i--)
	{
		sum=0;
		for(j=n-1;j>i;j--)
			sum=sum+x[j]*u[i][j];
		x[i]=(y[i]-sum)/u[i][i];

	}

	printf("\n	La solucion es :\n");
	for(i=0;i<n;i++)
  		printf("\n 	x[%d] = %.2f ",i+1,x[i]);
	printf("\n\n");
	
	

}
