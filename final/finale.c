/*
Autor: 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc nombre.c -o nombre
Fecha:  Thu May 13 10:16:27 CST 2021
librerias: stdio (u otras)
Resumen:
Entrada:
Salida:
*/
//Liberias
#include <stdio.h>
#include <math.h>
//numerar los pasos del pesudocodigo
//comencemos con las funciones y la abstraccion

float masa(float t, float tsfc, float eo, float mo, float mfo);
float gravedad(float y);
float friccion(float y, float cd, float a);
float f(float t, float y, float u);
float ro(float y);
//ahora, el  metodo de runge-kutta
//uno para la derivada
float kutta();
//otro para la funcion
float runge();
float k1();
float k2();
float k3();
float k4();
float m1();
float m2();
float m3();
float m4();
#define G= 6.693*pow(10,-11);
#define rt=6.4*pow(10,6);
#define mt = 6*pow(10,24);
#define R= 287;
#define L = 6.5*pow(10,-3);
#define g0 = 9.81;
#define T0 = 288;
#define P0 = 101325;
#define y0=0.58;
//velocidad inicial
#define u0=0;
#define h=0.1;

void main(){
    //pponemos variables y constantes
    //una variable aux donde guardar la informacion para evaluar las alturas.



    //imprimimos para cohete1
    float tsfc,eo,mo,mfo,e, a, cd;
    e= 3*pow(10,7);
    tsfc=3.2*pow(10,-4);
    cd = 61.27;
    a = 201.1;
    mo = 1.1*pow(10,5);
    mfo = 1.5*pow(10,6);


    puts("Cohete 1: \n");
    puts("Características: \n");
    printf("Empuje: %c \n",&e);
    printf("TSFC: %c \n",&tsfc);
    printf("CD: %c \n",&cd);
    printf("A: %c \n",&a);
    printf("Mo: %c \n",&mo);
    printf("Mfo: %c \n",&mfo);
    while (masa(t)> pow(10,5)){
        aux=runge(t, y, );
        t+= 0.1;
        y=aux;


    }
    //imprimimos altura y tiempo maximos.
    printf("La altura maxia es: %f \n", &y);
    printf("El tiempo máximo es: %f",&t);

}

float masa(float t, float tsfc, float eo, float mo, float mfo){
    float res;
    res = -tsfc*eo*t + mo + mfo;
    return res;
}
float gravedad(float y){
    float res;
    res = G*mt/pow((rt*y),2);
    return res;
}

float f(float t, float y, float u, float eo, float cd, float area){
    float res;
    res = (eo - 0.5*ro(y)*cd*area*u*u-masa(t)*gravedad(y))/masa(t);
    return res;
}
float ro(float y){
    float res;
    if (y<T0/L){
        res = P0/(R*T0)*pow((1-L*y/T0), g0/(gravedad(y)*L);
    }
    //si se supera determinada altura:
    else{
        res = 0;
    }
    return res;
}
//hacemos u = y', tal que yn+1 = yn + h*un
float kutta(){
    float res,aux;
    float n, ene;
    n = (b-a)/h;
    for(int i = 0; i<n;i++){
        res = kutta(t, y)+h/6(k1(ene)+2*k2(ene)+2*k3(ene)+k4(ene));
        //variable auxiliar
        aux = y;

    }
    return res;
}
float runge(){
    float res,aux;
    float n,ene;
    n = (b-a)/h;
    for(int i = 0; i<n;i++){
        res = runge(t, y)+h/6(m1(ene)+2*m2(ene)+2*m3(ene)+m4(ene));
        //variable auxiliar
        aux = y;
    }
    return res;
}
float k1(){
    float res;
    res = f(float t, float y, float u, float eo, float cd, float area);
    return res;
}
float k2(){
    float res;
    res = f((float t)*0.5, (float y)*0.5, float u, float eo, float cd, float area);
    return res;
}
float k3(){
    float res;
    res = f((float t)*0.5, (float y)*0.5, float u, float eo, float cd, float area);
    return res;
}
float k4(){
    float res;
    res = f((float t)*0.1, (float y)*0.1, float u, float eo, float cd, float area);
    return res;
}
//m_n = u_n + o.5*h*k_{n-1}
float m1(){
    float res;
    res= kutta(n); 
    return res;   
}
float m2(){
    float res;
    res= kutta(n) + 0.5*h*k1(n); 
    return res;  

}
float m3(){
    float res;
    res= kutta(n) + 0.5*h*k2(n); 
    return res;  

}
float m4(){
    float res;
    res= kutta(n) + h*k3(n); 
    return res;  

}


//Perdon por presentar solo una parte del examen: tengo un compromiso mas tarde
//y ya no me da tiempo de rellenar las funciones restantes. Utilicé el método de 
//runge-kutta. 
