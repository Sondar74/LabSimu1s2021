/*
Autor: 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc nombre.c -o nombre
Fecha:  Thu Apr 29 01:24:06 UTC 2021
librerias: stdio (u otras)
Resumen:
Entrada:
Salida:
*/
//Liberias
#include <stdio.h>
#include <math.h>

int suma1(int k);
float suma2(int k);
float suma3(int k);
float suma4(int k);

int main(){
	int n;
	//mensaje para usuario
	puts("Ingrese un numero entero positivo \n");
	scanf("%d", &n);
	//imprimimos las suamtorias
	printf("La suma k^2(k-3) es ");
	suma1(n);
	printf("La suma 3/(k-1) es ");
	suma2(n);
	printf("La suma 3  para su numero es ");
	suma3(n);
	printf("La suma ans+=0.1(4+3*pow(2,i))  es ");
	suma4(n);





}

int suma1(int k){
	int ans=0;
	int i=0;
	for(i=0;i<=k;i++){
		
		ans+=pow(i,2)*(i-3);

	}
	printf("%d \n",ans);
	return 0;

}
float suma2(int k){
	int i=0;
	float ans=0;
	for(i=1;i<=k;i++){
		ans+=3/(k-1);


	}
	printf("%f \n",ans);
	return 0;

}
float suma3(int k){
	int i=0;
	float ans=0,momo,momo2,weiyi,weiyi1;
	//hacemos la raiz cuadrada de cinco
	double result,numero=5,mitad=0.5;
	result=pow(numero,mitad);
	momo=(1+result)/2;
	momo2=(1-result)/2;
	//iniciamos el ciclo for


	for(i=1;i<=k;i++){
		ans+=result*(pow(momo,i)-pow(momo2,i));

	}
	printf("%f \n",ans);
	return 0;

}
float suma4(int k){
	int i=0;
        float ans=0,uno=0.1;
	for(i=1;i<=k;i++){
		ans+=uno*(4+3*pow(2,i));

	}
	printf("%f \n",ans);


	return 0;

}


