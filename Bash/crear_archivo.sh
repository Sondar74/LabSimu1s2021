#!/bin/bash

: << 'Header'
Autor:              Gabriel Barrios
Fecha:              11-03-2021
Tipo de archivo:    Script de Bash
Para ejecutar:      ./crear_archivo.sh
Resumen:            Crea un archivo de c con entradas y salidas.
Header

#imprimimos un encabezado con echo
echo "* * * * Vamos a crear un archivo C * * * * "
#pedimos que ingrese un nombre y lo guardamos en una variable
read -p "Ingrese nombre del archivo:" name
#hacemos de la variable un archivo .c
archivoc=$name".c"
#recopilamos info de la maquina
autor=$(whoami)
fecha=$(date)

gecece=$(gcc --version | head -n 1)
#en caso de que no se ingrese nada, ponemos un mensaje aclarando
#que se debe poner un nombre, y se termina el programa.
if [ -z $name ]; then
    echo "ingrese el nombre >:v"
    exit
fi
 #ahora, vamos colocando toda la informacion del archivo .c
#encabezado
echo "/*" >> $archivoc
#informacion del encabezado
echo "Autor: " >> $archivoc
echo "Compilador: " $gecece >> $archivoc
echo "Compilado: gcc nombre.c -o nombre" >> $archivoc
echo "Fecha: " $fecha >> $archivoc
echo "librerias: stdio (u otras)" >> $archivoc
echo "Resumen:" >> $archivoc
echo "Entrada:" >> $archivoc
echo "Salida:" >> $archivoc
echo "*/" >> $archivoc
#terminamos el encabezado

#pedimos la instalacion de algnos paquetes como comentarios
#en este caso, solo el studio.h es incluido

echo "//Liberias" >> $archivoc
echo "#include <studio.h>" >> $archivoc
echo "//numerar los pasos del pesudocodigo" >> $archivoc


