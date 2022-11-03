#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define F(x) (cos (x))

//N_PI

float recurcentral(float ta, float h, int n);


int main()
{
  float h = 0.001
  float a, h, resultado;

  resultado = recursionCentral(ta, h, n);
    return 0;
}

float recurcentral(float ta, float h, int n)
{
  float resultado;
  float t = ta -h;
 
  if(n>1)
    {
      resultado = ((F(ta) - F(t))/h) 
    }
  if(n==1)
    return (F(ta) - F(t))/h;
}
