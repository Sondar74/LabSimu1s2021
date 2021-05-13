unset label
clear
set output "grafica1.jpg"
set title "{Carne 8.2}"
set grid
set xrange [0:6.5]
set yrange [0:4]

set style data linespoints
plot 1/tan(x) linewidth 3