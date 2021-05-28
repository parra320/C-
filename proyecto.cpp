
#include <stdio.h>
#define p printf
#define s scanf
int main()
{
	int c, tipo_ecu, E, ME, VA, DES, MO, AP ,RE, AS, n, i=0, m[n],acu_num;
	printf("\n\n\t �que desea hacer?");
	p("\n\n\t a) calcular la media aritmetica");
	p("\n\n\t b) calcular la varianza");
	p("\n\n\t c) calcular la desviacion estandar");
	p("\n\n\t d) calcular la moda");
	p("\n\n\t e) calcular el numero de aprobados y reprobados");
	p("\n\n\t f) calcular el porcentaje de alumnos aprobados y reprobados");
	p("\n\n\t g) calcular el numero de aspirantes a beca");
	p("\n\n\t");
	s("%c",&c);
    switch (c){
    	case'a': case 'A':
	        p("\n\n\t calcular media aritmetica");
	        tipo_ecu='ME';
    	break; 
    	case'b': case 'B':
		    p("\n\n\t calcular la varianza");
		    tipo_ecu='VA';
    	break;
    	case'c': case 'C':
    		p("\n\n\t calcular la desviacion estandar");
		    tipo_ecu='DES';
		break;
    	case'd': case 'D':
	        p("\n\n\t calcular la moda");
		    tipo_ecu='MO';
		break; 
    	case'e': case 'E':
		    p("\n\n\t calcular el numero de alumnos aprobados y reprobados");
		    tipo_ecu='AP';
		break;
    	case'f': case 'F':
    		p("\n\n\t calcular el porcentaje de alumnos aprobados y reprobados");
		    tipo_ecu='RE'; 
	    break;		
		case'g': case 'G':
    		p("\n\n\t calcular el numero de aspirantes a beca");
		    tipo_ecu='AS';
	    break;	
	    default:
			p("\n\n\t Error, esa no es una opcion ");
			tipo_ecu='E';
	    }

    p("\n\n\t dame el numero de elementos que desea evaluar ");
	s("%d", &n);
    p("\n\n\t dame los elementos de tu arreglo");
    for(i=0;i<n;i++)
    {
    	p("\n\n\t m[%d]", i+1);
    	s("%d", &m[i]);
    	acu_num+=m[i];	
    }
    if(tipo_ecu=='ME'){
        p("poner comando para realizar la operacion");}
    else
	    if(tipo_ecu=='VA'){
		    p("poner comando para relalizar la operacion");}
		else
		    if(tipo_ecu=='DES'){
		        p("poner comando para relalizar la operacion");}
		    else
			    if(tipo_ecu=='MO'){
				   p("poner comando para relalizar la operacion");}
				else
				    if(tipo_ecu=='AP'){
					    p("poner comando para relalizar la operacion");}
                    else 
                        if(tipo_ecu=='RE'){
						    p("poner comando para relalizar la operacion");}
						else
						    if(tipo_ecu=='AS'){
							    p("poner comando para relalizar la operacion");}
						    else (tipo_ecu=='E');				
                            p("\n\n\t error");
    }
