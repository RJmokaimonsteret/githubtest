#include <stdio.h>
#include <math.h>

int main (void)
{

double m;
double n;

double side1;
double side2; 
double h;


printf("skriv m og n:\n"); 
scanf("%lf %lf", &m, &n);

side1 = m*m-n*n;
side2 = 2*m*n;

h = m*m+n*n;

printf("de tre sider er %lf/n %lf/n %lf/n", side1, side2, h);

return 0;


//hej hej hej


}