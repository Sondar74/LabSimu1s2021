/*
Autor: 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc nombre.c -o nombre
Fecha:  Fri Apr 30 02:10:06 UTC 2021
librerias: stdio (u otras)
Resumen:
Entrada:
Salida:
*/
//Liberias
#include <stdio.h>
#include <math.h>
//numerar los pasos del pesudocodigo

int main (){
	//numero de elementos
	int n=4;
	int A[n];
	int x=0;
	puts("Vamos a hacer un vector \n");
	for(int i=0;i<=n;i++){
		puts("Ingrese un numero entero:    ");
		scanf("%d",&x);
		A[i]=x;
	
	}
	

	//variables de conteo
	int interruptor=1;
	int pasada=0, j=0;
	//revisamos elemento por elemento
	for(pasada=0;pasada < n  && interruptor;pasada++){
		interruptor=0;
	        for(j=0;j < n-pasada;j++){
			if(A[j] > A[j+1]){
				//guardamos un valor y lo reemplazamos
				int aux;
				
			        aux=A[j];
			        A[j] = A[j+1];
			        A[j+1]=aux;
				
			}
			interruptor=1;
		}	
	
	}
	puts("Su vector ordenado es:");
	for(int i=0;i<=n;i++){
		printf("%d, ",A[i]);

	}
	puts("\n");
	
}

