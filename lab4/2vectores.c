/*
Autor: 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc nombre.c -o nombre
Fecha:  Fri Apr 30 03:31:36 UTC 2021
librerias: stdio (u otras)
Resumen:
Entrada:
Salida:
*/
//Liberias
#include <stdio.h>
#include <math.h>
//numerar los pasos del pesudocodigo

int main(){
	int n=3;
	float x1,x2,y1,y2,z1,z2;;
	int v1[n],v2[n];

	//primer vector:
	puts("Vamos a hacer operaciones con dos vectores: \n");
	puts("Ingresse las coordenadas del primer vector: \n");
	puts("x1= ");
	scanf("%ls",&v1[0]);
	puts("y1= ");
	scanf("%ls",&v1[1]);
	puts("z1= ");
	scanf("%ls",&v1[2]);
	//segundo vector
	puts("Ingresse las coordenadas del segundo vector: \n");
	puts("x2= ");
	scanf("%ls",&v2[0]);
        puts("y2= ");
        scanf("%ls",&v2[1]);
	puts("z2= ");
	scanf("%ls",&v2[2]);

	//magnitud
	float magnitud,magnitud2;

	magnitud=pow((v1[0]*v1[0])+(v1[1]*v1[1])+(v1[2]*v1[2]),0.5);
	
	magnitud2=pow((v2[0]*v2[0])+(v2[1]*v2[1])+(v2[2]*v2[2]),0.5);
	printf("\n magnitud de v1 = %f, magnitud de v2 = %f \n",magnitud,magnitud2);
	puts("\n v1+v2= ");
	//suma
	float x=0,y=0,z=0;
	float suma;
	x=v1[0]+v2[0];
	y=v1[1]+v2[1];
	z=v1[2]+v2[2];
	printf("(%f , %f, %f)",x,y,z);

	//producto escalar:
	float equis,ye,zeta,hola;
	equis=v1[0]*v2[0];
	ye=v1[1]*v2[1];
	zeta=v1[2]*v2[2];
	hola=equis+ye+zeta;
	printf("\n El producto escalar es: %f",hola);
	//producto vectorial
	float comp1,comp2,comp3;
	comp1=(v1[1]*v2[2])-(v1[2]*v2[1]);
	comp2=(v1[2]*v2[0])-(v1[0]*v2[2]);
	comp3=(v1[0]*y2)-(v1[1]*v2[0]);
	printf("El producto vectorial es: (%f ,%f ,%f) \n",comp1,comp2,comp3);

}

