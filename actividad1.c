#include <stdio.h>
#include <math.h>

#define S(i)pow(i,2)*(i-3)
#define F(16-pow(

float sumatoria(int inicio , int fin)
{
  float suma = 0.0;
  for(int i=inicio; i<=fin; i++)
   {
	suma +=S(i);
   }
   return suma;
}

int main()
{
  int ini=1;
  int fin = 4;
  float result  = sumatoria(ini,fin);
  printf("La sumatoria es %f\n", result);
  return 0;
}
