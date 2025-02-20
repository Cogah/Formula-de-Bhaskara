#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	// Bhaskara -->  x = (pot(b,2) +- sqrt((-4)*a*c))/2*a
	double a, b, c;
	
	printf ("insira o valor de a: ");
	scanf("%lf", &a);
	printf ("insira o valor de b: ");
	scanf("%lf", &b);
	printf ("insira o valor de c: ");
	scanf("%lf", &c);
	
	// Calcular delta
	double delta =  pow(b,2) - 4*a*c;
	double x1 = ((-1 * b) + sqrt(delta))/(2 * a);
	double x2 = ((-1 * b) - sqrt(delta))/(2 * a);
	
	 // Se delta for menor ou igual que 0 ou se a , b ou c forem igual à 0 faça a impressão de tela de que o calculo é imposs�vel.
	 if ( delta <= 0 || a == 0)
	 {
	 	  printf("calculo impossivel\n");
	 } 
	 // Senão imprima na tela os respectivos resultados r1 e r2.
	 else
	 {
		  printf("X1 = %.5lf\n", x1);
		  printf("X2 = %.5lf\n", x2);
	 }
	return 0;
}
