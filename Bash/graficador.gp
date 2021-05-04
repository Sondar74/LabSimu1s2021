unset label
clear
set terminal jpeg
set output "grafica1.jpg"
set title "{Carne 8.1}"
set grid
set style data linespoints
plot "datos" using 1:2
plot y= 0.510875 x + 0.653140
plot y= 0.510875 x + 0.653140 with line linewidth 3
plot [0:3] [-5:5]  0.510875*x + 0.653140 with line linewidth 3 linecolor rgb "blue"
