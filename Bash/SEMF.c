/*
Autor: 
Compilador: (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.01
Compilado: gcc nombre.c -o nombre
Fecha:  Tue Apr 6 0:41:48 UTC 2021
librerias: stdio (u otras)
Resumen:
Entrada:
Salida:
*/
//Liberias
#include <math.h>
#include <stdio.h>

//numerar los pasos del pesudocodigo


int main(){
	float masaa, masap, masae, masan, a1, a2, a3, a4, a5, a0;
	float f0, f1, f2, f3, f4, f5;
        int A, Z;
	int n=0;

	
	a1=15.56;
	a2=17.23;
	a3=0.697;
	a4=93.2;
	n=2;
	masap=938.272013;
	masae=0.51099892;
	masan=939.565560;
	printf("Ingrese el valor de A:");
	scanf("%d",&A);
	printf("Ingrese el valor de Z:");
	scanf("%d",&Z);
	f0=Z*(masap+masae)+(A-Z)*masan;
	f2=a2*pow(A, 2/3);
	f1=a1*A;
	f3=a3*pow(Z, 2)/pow(A,1/3);
	f4=a4*pow((Z-A/2),2)/A;
	if(A % n==0 && Z % n == 0){
		f5=(-1)*12*pow(A, -1/2);

	}if(Z % n != 0 && A % n != 0){
		f5=12*pow(A, -1/2);
		

	}else{
		f5=0;

	}
	masaa=(f0+f2+f3+f4+f5-f1)/941.4940;
	
	printf("M(A,Z)= %.4f",masaa);



}
