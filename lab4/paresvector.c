/*
Autor: 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc nombre.c -o nombre
Fecha:  Thu Apr 22 03:07:33 UTC 2021
librerias: stdio (u otras)
Resumen:este programa ordena los numeros pares del 2 al 20
Entrada:
Salida:
*/
//Liberias
#include <math.h>
#include <stdio.h>
//numerar los pasos del pesudocodigo

#define NUM 10
int main(){
	//creamos el vector
	int vector[]={2,4,6,8,10,12,14,16,18,20};
	int i;
	int k=2;
	char x;
	//pedimos el ingreso
	printf("inserte a para un vector horizontal y b para uno vertical \n");
	scanf("%c", &x);
	//hacemos el vector
	
	
	puts("El vector es: \n");
	
	//imprimimos el vector horizontal
	if(x=='a'){
		puts("(");
		for(i=0;i<NUM;i++){
			
			printf("%d ,",vector[i]);
			

		}
		printf(") \n");

	}
	//imprimimos vector vertical
	if(x=='b'){
		
		for(i=0;i<NUM;i++){
			printf("%d ,\n",vector[i]);

		}

	}

}


