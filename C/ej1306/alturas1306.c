/*
Autor: Gabriel Barrios
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc nombre.c -o nombre
Fecha:  Fri Mar 19 22:39:11 UTC 2021
librerias: stdio (u otras)
Resumen: calcula media, maximo y minimo hasta que se ingresa un negativo
Entrada:
Salida:
*/
//Liberias
#include <stdio.h>
//numerar los pasos del pesudocodigo

int main(){
	//inciamos variables

	float x=0, media=0, minimo=0, maximo=0;
	int n=0, i=0;
	//pedimos que las entradas no sean negativas.
	while(i>=0){
		printf("Ingrese un numero positivo: ");
		scanf("%f",&x);
		if(x>=0){
			//inicianmos el conteo de n
			n++;
			//vamos recopiladno la informacion para la media
			media+=x;
			//calculamos max y min
			if(x>maximo){
				maximo=x;
			}
			if(x<minimo){
				minimo=x;
			}
		}
		//ponemos el caso inicial, para que min,max dejen de ser cero
		if(n==1){
				
			minimo+=x;
			

		}
		
		
		
		//en caso de que x sea menos a cero, pasamos a lo siguiente
	 	if(x<0){
			break;
		}

										
		i==x;

	}

	
	if(n==0){
		printf("Me detengo \n");
		//ahora mostramos las respuestas
	}else
        {     
		printf("La media de alturas es: %.2f \n",media/n);
		printf("la altura maxima es: %.2f \n",maximo);
		printf("la altura minima es: %.2f \n",minimo);
	}
	return 0;
	

}

