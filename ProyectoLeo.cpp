#include<stdio.h>
#include<math.h>
#define p printf
int main(){
    p("Ingrese el numero de alumnos: ");
    int n=0,cal=0, i,r, m=r, c;
    int alumnos[50];
    scanf("%d",&n);
    float med, formula, varianza, desv;
    for(i=0; i<n; i++){
        printf(" Alumno %d: ", i+1);
        int num;
        scanf("%d", &num);
        alumnos[i]=num;
        cal=cal+alumnos[i];
    }
    med=(float)cal/(float)n;
    p("\nLa media aritmetica es de: %.2f\n",med);
    for(i=0; i<n; i++){
        formula=formula+pow(((float)alumnos[i]-med),2.0);
    }
    varianza=formula/n;
    p("la varianza es igual a: %.2f\n",varianza);
    desv=sqrt(varianza);
    p("La desviacion Estandar es igual a: %.2f", desv);
    for (i = 0; i < n; i++){
        r=0;
        for (int j = 0; j < n; j++){
            if(alumnos[i]==alumnos[j] && i!=j){
                r=r+1;
            }
        }
        if(r>=m){
            m=r;
            c=i;
        }
    }
    p("La moda es igual a: %d y se repite %d veces", alumnos[c], m+1);
}