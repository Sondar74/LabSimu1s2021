#!/bin/bash

: << 'Header'
Autor: Gabriel Barrios
Fecha:
Tipo de archivo: Script de Bash
Para ejecutar: ./clima.sh
Resumen: Reporte del clima en Guatemala. 
Header

#instalamos algunos paquetes
apt-get install sudo -y
sudo apt install curl
#hacemos un documento donde archivar la info.
touch documento.txt

#obtenemos la información y la guardamos en el documento
curl -o documento.txt wttr.in/Guatemala

#bienvenida
#usamos echo para imprimir dimbolos  en la pantalla
echo " * * * * Reporte del tiempo * * * *"
echo "El clima en Guatemala es:"
#mostramos las primeras 7 lineas del documento
head -n 7 documento.txt


