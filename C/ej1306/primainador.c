/*
Autor: 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc nombre.c -o nombre
Fecha:  Sat Mar 20 03:48:41 UTC 2021
librerias: stdio (u otras)
Resumen:
Entrada:
Salida:
*/
//Liberias
#include <stdio.h>
//numerar los pasos del pesudocodigo

int main(){
	//dammos la bienvenida
	//inicmaos algunas variables
	int n=0, i=2, primo=1;
	printf("inserte un numero entero positivo");
	//se lee un entero
	scanf("%d",&n);
	while(i<(n-1)&&primo==1){
		if(n%i==0){
			primo=0;

		}
		else{
			i++;

		}


	}
	if(primo==0){
		printf("no es primo \n");

	}
	else{
		printf("es primo. Excelente eleccion \n");

	}

}
