#include <iostream>
#include <cmath>

using namespace std;

#define F(x) (1.0/x)

double formula()
{
  double a = 0.5;
  double b = 2.0;
  double posicion = 0.0;
  double suma = 0.0;
  double = resultado;
  int i;
  
  // F = ((b-a/2.0*n))*F(a)+(2.0*F(2.0*(b-a)/3)+a))+)
  for(i=1; i<=10; i++)
    {
      posicion = i*(b-a/i);
      suma = 2.0*F(posicion) + suma;
    }
  resultado = ((b-a/(2.0*n))*(F(a)+suma+F(b)));
  printf("\nEl resultado es: %f", formula());
  
  return resultado;
  
}

int main()
{
  float resultado;
  system("clear");
  //printf("\nEl resultado es: %f", formula());
  formula();
  printf("\n");
  return 0;
}

