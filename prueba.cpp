#include<iostream>

using namespace std;


int main()
{
    int i,j,k ;//variables para los ciclos 
    int n;//número de elementos y filas de la matriz 
    
    cout<<"Dame el número de filas y columnas:  ";
    cin>>n;
    float A[n][n],I[n][n], aux,matriz;
    
    for(i=0;i<n; i++)//para la matriz identidad 
    {
       for (j=0; j<n;j++)
       {
        
         cin>>A[i][j];
         I[i][j]=0;
    
         if(i==j)
         {
          I[i][j]=1;
         }
       }
    }
    //reducción por renglones 
    
   for(i=0; i<n; i++)//moverme a lo largo de la diagonal
   { 
     matriz=A[i][i];
       for(k=0; k<n;k++){//se convierte el primer número a 1 y se hace la división en toda la fila
           A[i][k]=A[i][k]/matriz;
           I[i][k]=I[i][k]/matriz;
         }
           for(j=0;j<n;j++){//cambia todo lo que esta debajo y arriba a 0 y no se aplique a la diagonal 
             if(i!=j)//no esta en la diagonal y reduce a 0
              {
                matriz=A[j][i];
                     for(k=0;k<n;k++){
                         A[j][k]=A[j][k]-matriz*A[i][k];
                           I[j][k]=I[j][k]-matriz*I[i][k];
                        }
              }
       }
   } 
    
    
    for(i=0;i<n; i++)//para la matriz identidad 
    {
       for (j=0; j<n;j++)
       {
         cout<<A[i][j];
         cout<<I[i][j];
         }
    }
    
    
    return 0;
}