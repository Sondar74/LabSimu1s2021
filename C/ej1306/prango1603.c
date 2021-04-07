/*
Autor: 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc nombre.c -o nombre
Fecha:  Sat Mar 20 04:20:49 UTC 2021
librerias: stdio (u otras)
Resumen: este es el ultimo
Entrada:
Salida:
*/
//Liberias
#include <stdio.h>
//numerar los pasos del pesudocodigo

int main(){
	//iniciamos algunas variables:
	int n1=0, n2=0, i=0, j=2, primo=1;
	//bienvenida:
	printf("* * * * PRANGO * * * * \n");
	printf("Inserte dos numeros para formar un rango \n");
	//leemos los dos numeros
	printf("Inserte el numero menor \n");
	scanf("%d",&n1);
	printf("Inserte el numero mayor \n");
	scanf("%d",&n2);
	//pedimos que el segundo sea mayor:
	if(n1<n2){
		i=n1;
		while(i<=n2){
			j=2;
			primo=1;
			//determinamos si es primo
			//mediante el primoinador
			while(j<i&&primo==1){
				
				if(i%j==0){
					primo=0;
				}
				
				j++;

			}	

			if(primo==1){
				printf("%d ,",i);
			

			}
			//si es primo, lo imprimimos
			
			i++;
		}

	}
	else{
		printf("el segundo debe ser el mayor");

	}


}
