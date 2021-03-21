/*
Autor: 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc nombre.c -o nombre
Fecha:  Sat Mar 20 03:37:38 UTC 2021
librerias: stdio (u otras)
Resumen:
Entrada:
Salida:
*/
//Liberias
#include <stdio.h>
//numerar los pasos del pesudocodigo

int main(){
	//bienvenida y lectura
	printf("Inserte un numero positivo \n");
	//inicializamos algunas variables:
	float n=0;
	int i=1;
	scanf("%f",&n);
	//queremos que i sea la raiz
	//o sea, i*i debe ser menor i igual a la entrada
	if(n>=0){
		while(i*i<=n){
			i++;
		}
		printf("La raiz de n se aproxima a: %d",i-1);

	}
	else{
		printf("debe ingresar un numero positivo \n");
	}


}
