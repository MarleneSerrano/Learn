#include <stdio.h>

void calcularPotencia(float x, int n);

int main(void)
{
  int n;
  float x,y;

  printf("\nIngresa el valor de x y el valor de n: ");
  scanf("%f%i", &x, &n);
  y = calcularPotencia(x,n);
  printf("\nLa potencia de: %.2f elevada a n: %i es: %.2f\n", x, n, y);

  return 0;
}
float 
