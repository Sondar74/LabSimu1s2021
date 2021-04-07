/*
Autor: 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc nombre.c -o nombre
Fecha:  Wed Apr 7 01:53:55 UTC 2021
librerias: stdio (u otras)
Resumen:
Entrada:
Salida:
*/
//Liberias
#include <stdio.h>
//numerar los pasos del pesudocodigo
int suma(int,int);
int resta(int,int);
int producto(int,int);
int division(int,int);

int main(){
	//enunciamos variables de entrada y salida
	int a, b;
	int c;
	float salida;
	//pedios que ingrese dos numeros
	
	printf("Ingrese un numero positivo \n");
	scanf("%d",&a);
	printf("Ingrese otro numero positivo \n");
	scanf("%d",&b);
	printf("Sus numeros son %d y %d \n",a,b);
	printf("Para sumar, escriba 1. \n");
	printf("Para restar, escriba 2. \n");
	printf("Para sumar, escriba 3. \n");
	printf("Para dividir, escriba 4. \n");
	printf("Para salir, escriba 0. \n");
	scanf("%d",&c);

	//comenzamos con las condiciones e indicamos las salidas
	if(c==0){
		printf("Nos vemos... Tenga un lindo dia \n");

	}
	if(c==1){
		printf("%d \n", suma(a,b));
	}
	if(c==2){
		printf("%d \n", resta(a,b));
	}
	if(c==3){
		printf("%d \n", producto(a,b));
	}
	if(c==4){
		printf("%d \n", division(a,b));
	}

}

//vamos con las funciones
int suma(int x, int y){
	return x+y;

}

int resta(int x, int y){
        return x-y;

}

int producto(int x, int y){
        return x*y;

}
int division(int x, int y){
        return x/y;

}

