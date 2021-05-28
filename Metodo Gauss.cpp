#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(void)
{
	FILE *matriz;
	FILE *independiente;
	double **a , *x , factor , sum ;
	double b[10];
	char Line[80];
	int n , i , j , k ;
	
	 matriz = fopen("A.dat", "rt");
	 fgets(Line, 80, matriz);
	 sscanf(Line, "%d", &n);
	 printf("\n	N = %3d\n\n 	Matriz Principal\n\n", n);
	 
	 a= (double **)malloc(n*sizeof(double*));
	 
	 for(i=0; i<n; i++)
	 {
	 	a[i] = (double *) malloc( n * sizeof(double) ) ;
	 }
	  for(i=0; i<n; i++)
	  {
	  printf("	|");
	 	for(j=0; j<n; j++)
	 	{
	 		fgets(Line, 80, matriz );
	 		sscanf(Line, "%lf", &a[i][j]);
	 		printf(" %10.6lf  ", a[i][j]);
	 		
		 }
		printf(" |");
		 printf("\n");
	 }
	 
	 
	 independiente = fopen("B1.dat", "rt");
	 fgets(Line, 80, independiente);
	 sscanf(Line, "%d", &n);
	 printf("\n");
	  for(i=0; i<n; i++)
	  {
	  
	 	fgets(Line, 80, independiente );
	 	sscanf(Line, "%lf", &b[i]);
	 	printf(" B[%2d] = %10.6lf \n ",i+1, b[i] );
	 		
		 
		 printf("\n");
	 }
	
	
	
	x = (double *) malloc( n*sizeof(double) ) ;
	
	
	
	printf("\tMATRIZ:\n");	
	for( i = 0 ; i < n ; i++ )
	{
	  printf("| ") ;
      for( j = 0 ; j < n ; j++ )
      {
      	printf("%10.6lf ", a[i][j] );
	  }
	  printf(" | | x[%d] |  | %10.6lf |", i , b[i]) ;
	  printf("\n");
	}
	
	for( i=0 ; i < n-1 ; i++)
    {
        for( j=i+1 ; j < n ; j++)
        {
            factor = a[j][i]/a[i][i];
            a[j][i] = 0.0 ;
            for( k = i+1 ; k <n ; k++)
            {
            	a[j][k] = a[j][k] - factor*a[i][k] ;
			}
			b[j] = b[j] - factor*b[i] ;
        }
    }
	
	x[n-1] = b[n-1] / a[n-1][n-1] ;
	for( i=n-2 ; i >=0 ; i-- )
	{
	  sum = b[i] ;
	  for( j = i+1 ; j < n ; j++)
	  {
	  	sum = sum -a[i][j]*x[j] ;
	  }
	  x[i] = sum / a[i][i] ;
 	}
	
	printf("\n\n\n") ;
	printf("\tRESULTADO:\n");
	
	for( i = 0 ; i < n ; i++ )
	{
	  printf("| ") ;
      for( j = 0 ; j < n ; j++ )
      {
      	printf("%10.6lf ", a[i][j] );
	  }
	  printf(" | | %10.6lf |  | %10.6lf |", x[i] , b[i]) ;
	  printf("\n");
	}
	
	for( i = 0 ; i < n ; i++ )
	{
	  free( a[i] );
	}
	free(a) ;
	free(x) ;
	
	fclose (matriz);
	fclose (independiente);
	 
}
