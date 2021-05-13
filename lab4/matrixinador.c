/*
Autor: 
Compilador:  gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilado: gcc nombre.c -o nombre
Fecha:  Wed May 5 17:26:53 UTC 2021
librerias: stdio (u otras)
Resumen:
Entrada:
Salida:
*/
//Liberias
#include <stdio.h>
#include <math.h>
//numerar los pasos del pesudocodigo


#define CM 3
float impresion(float matriz[CM][CM]);
float suma(float matriz[CM][CM], float matroz[CM][CM]);
float cofactor(float a, float b, float c, float d);

int main(){
	//declaraos las matrices
	float matA[CM][CM];
	float matB[CM][CM];
	int fila, columna;
	float constante;
	float negativo[CM][CM];

	//interaccion con el ususario
	puts("Vamos a hacer dos matrices de 3x3 \n");
	puts("Comenzaremos con la matriz matA: \n");
	puts("A continuacion ingrese elemento por elemento para esta matriz: \n");
	for(fila=0;fila<CM;fila++){
		for(columna=0;columna<CM; columna++){
			puts("Ingrese valor: ");
			scanf("%f", &matA[fila][columna]);

		}

	}
	//lo mismo para matB
	
	puts("\n Que obediente. Ahora vamos  con la matriz matB: \n");
	puts("A continuacion ingrese elemento por elemento para esta matriz: \n");
	for(fila=0;fila<CM;fila++){
		for(columna=0;columna<CM; columna++){
			puts("Ingrese valor: ");
			scanf("%f", &matB[fila][columna]);
		}
	}

	//pedimos la constante
	puts("\n Ahora ingrese una constante:  ");
	scanf("%f", &constante);

	puts("\n ************************************************************* \n");
	puts("Por su colaboracion, usted ha ganado una serie de resultados a partir de las matrices anteriores. Disfrutelos!");

	//comenzamos con las funciones
	//inciso a:
	float matc[CM][CM];

	for(fila=0;fila<CM;fila++){
		for(columna=0;columna<CM; columna++){
			matc[fila][columna]=matA[fila][columna]* constante;
		}
	}
	puts("matA*constante: \n");
	impresion(matc);

	//suma
	puts("matA+matB: \n");
	suma(matA, matB);

	//resta
	puts("matA+matB: \n");
	//multiplicamos matB por menos uno
	for(fila=0;fila<CM;fila++){
		for(columna=0;columna<CM; columna++){
			negativo[fila][columna]=matB[fila][columna]*(-1);
			}
	}
	suma(matA,negativo);
	//multiplicaion
	float producto[CM][CM];
	for(int a=0;a<CM;a++){
		for(int i=0;i<CM;i++){
			int sum=0;
			for(int j=0;j<CM;j++){
				sum+= matA[i][j]*matB[j][a];

			}
			producto[i][a] = sum;

		}

	}
	puts("matA*matB: ");

	for(fila=0;fila<CM;fila++){
		for(columna=0;columna<CM;columna++){
			printf("%f", producto[fila][columna]);
		}
		printf("\n");
	}

	//det
	puts("Det(matA): \n");
	float primero, segundo, tercero;
        float det;

	primero= matA[0][0]*(matA[1][1]*matA[2][2] - matA[1][2]*matA[2][1]);
	segundo=matA[0][1]*(matA[1][2]*matA[2][0] - matA[1][0]*matA[2][2]);
	tercero=matA[0][2]*(matA[1][0]*matA[2][1] - matA[1][1]*matA[2][0]);
	det=primero+segundo+tercero;
	printf("%f",det);

	//traspuesta
	float traspuesta[CM][CM];
	puts("Traspuesta de matB");

	for(fila=0;fila<CM;fila++){
		for(columna=0;columna<CM;columna++){
			traspuesta[fila][columna]=matB[columna][fila];

		}

	}
	impresion(traspuesta);
	//inversa
	puts("Inversa de matA:");
	float adjuntatraspuesta[CM][CM];
	adjuntatraspuesta[0][0]=cofactor(matA[1][1], matA[1][2],matA[2][1] ,matA[2][2]);
	adjuntatraspuesta[0][1]=cofactor(matA[0][2], matA[0][1],matA[2][1] ,matA[2][2]);
	adjuntatraspuesta[0][2]=cofactor(matA[0][1], matA[0][2],matA[1][1] ,matA[1][2]);
	adjuntatraspuesta[1][0]=cofactor(matA[1][2], matA[1][0],matA[2][2] ,matA[2][0]);
	adjuntatraspuesta[1][1]=cofactor(matA[0][0], matA[0][2],matA[2][0] ,matA[2][2]);
	adjuntatraspuesta[1][2]=cofactor(matA[0][2], matA[0][0],matA[1][2] ,matA[1][0]);
	adjuntatraspuesta[2][0]=cofactor(matA[1][0], matA[1][1],matA[2][0] ,matA[2][1]);
	adjuntatraspuesta[2][1]=cofactor(matA[0][1], matA[0][0],matA[2][1] ,matA[2][0]);
	adjuntatraspuesta[2][2]=cofactor(matA[0][0], matA[0][1],matA[1][0] ,matA[1][1]);
	

	
	float inversa[CM][CM];
	for(fila=0;fila<CM;fila++){
		for(columna=0;columna<CM;columna++){
			inversa[fila][columna]=adjuntatraspuesta[fila][columna]/det;
		}
	}
	impresion(inversa);

	//gauss
	puts("Reduccion de Gauss para matA: \n");




}

//impresion
float impresion(float matriz[CM][CM]){
	int fila, col;
	for(fila=0;fila<CM;fila++){
		for(col=0;fila<CM;col++){
			printf("\n %.1f \n", matriz[fila][col]);

		}
		printf("\n");
	

	}
	return 0;

}
float suma(float matriz[CM][CM], float matroz[CM][CM]){
	int fila, col;
	float sumatoria[CM][CM];

	for(fila=0;fila<CM;fila++){
		for(col=0;fila<CM;col++){
			sumatoria[fila][col]=matriz[fila][col]+matroz[fila][col];
			}
	}
	impresion(sumatoria);
	return 0;
}

float cofactor(float a, float b, float c, float d){
	float deti=0;
	deti=a*c-b*d;
	return deti;

}
