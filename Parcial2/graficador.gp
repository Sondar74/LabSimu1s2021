unset label
clear
set output "grafica1.jpg"
set title "{Carne 8.1 r=0.981}"
set grid
set xrange [0:6.5]
set yrange [0:4]
set xlabel "T(N) +- 0.001N"
set ylabel "Longitud de onda (m)"
set style data linespoints
a=0.510875
b=0.653140 
plot "Datos.txt" using 1:2:3 linetype 7 linecolor 0 with errorbars, a*x + b
