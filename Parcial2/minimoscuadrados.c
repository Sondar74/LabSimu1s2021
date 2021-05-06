/*
Autor:   
Fecha:  
compilador:  
Para Compilar: gcc -o minimoscuadrados minimoscuadrados.c -lm
Version: 
librerias: stdio, math
Resumen: Ejercicio de la cuerda para carne 
*/

//libreiras
#include <stdio.h>
#include <math.h>

//declaramos variables globales
//tensione en el eje x
float x[]={4.694,1.264,0.578,0.284,0.196}, y[]={3,1.5,1,0.75,0.6};
int n=5;

float sumdata( float datos[]);
float sumdatamul(float a[],float b[]);
//ahora, para el inciso 2
float error(float a[], float b[]);
float errorxy(float datos[]);

int main(){
    //variables
    float b,m,r,seis;
    //variables para error
    float errorb,errorm,errorseis;

    //formulazo
    m=(5*sumdatamul(x,y)-sumdata(x)*sumdata(y))/(5*sumdatamul(x,x)-sumdata(x)*sumdata(x));
    //formulazo II
    b=(sumdata(y)-m*sumdata(x))/5;
    //hacemos el coeficiente de relacion
    r=(5*sumdatamul(x,y)-sumdata(x)*sumdata(y))/sqrt((5*sumdatamul(x,x)-sumdata(x)*sumdata(x))*(5*sumdatamul(y,y)-sumdata(y)*sumdata(y)));
    //imprimimos la recta
    printf("y = %f x + %f\n",m,b);
    //coef. determinacion
    printf("coef. d: %f\n",r*r);

    //calculamos la longitud de onda para t=6N
    seis=6*m+b;
    printf("longitud para 6N = %f \n",seis);

    //flotamos errores establecidos:
    float errorx,errorxx,erroryx;
    float error1n,error1d;
    errorx = sumdata(x)*0.001;
    errorxx=error(x,x);
    erroryx=errorxy(y);
    //error de m
    error1n=5*erroryx+5*0.001*sumdata(y);
    error1d=5*errorxx+sumdata(x)*errorx;
    errorm=m*(error1n/(5*sumdatamul(x,y)-sumdata(x)*sumdata(y)) + error1d/(5*sumdatamul(x,x)-sumdata(x)*sumdata(x)));
    //error de b
    errorb=(m*sumdata(x)*((errorm/m) + (errorx/sumdata(x))))/5;
    //error final:
    errorseis=(6*errorm+errorb)/10;
    printf("longitud para 6N = %f +- %f\n",seis,errorseis);


 
}

//sumatoria
float sumdata(float datos[]){
    float sumita=0;
    for(int i=0;i<n;i++){
        sumita+=datos[i];
    }
    return sumita;
}
//sumatoria de productos
float sumdatamul(float a[],float b[]){
    float sumita=0;
    for(int i=0;i<n;i++){
        sumita+=a[i]*b[i];
    }
    return sumita;

}
//error para la sumatoria de productos
float error(float a[],float b[]){
    float mistake;
    for(int i=0;i<n;i++){
        mistake+=a[i]*b[i]*((1/a[i])+(1/b[i]));
    }
    return mistake;

}
//una funcion para calcular el error y su propagacion de algunas sumatorias
float errorxy(float datos[]){
	float mistake;
	for(int i=0;i<n;i++){
		mistake+=0.001*datos[i];
	}
	return mistake;



}
