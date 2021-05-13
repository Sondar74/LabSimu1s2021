/*
Autor: 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc nombre.c -o nombre
Fecha:  Thu Apr 29 04:22:20 UTC 2021
librerias: stdio (u otras)
Resumen:
Entrada:
Salida:
*/
//Liberias
#include <stdio.h>
#include <math.h>
//numerar los pasos del pesudocodigo
//
//

long factorial(int k);

int main(){
	int n;
	//pedimos la entrada
	puts("Ingrese un numero entero \n");
	scanf("%d",&n);
	//imprimimos n!
	printf("%d ! = %ld \n",n,factorial(n));

}

long factorial(int k){
	int ans=0;
	//establecemos que 0!=1!=1
	if(k<=1){
		
		return 1;
	}else{
		return (k*factorial(k-1));

	}


}

