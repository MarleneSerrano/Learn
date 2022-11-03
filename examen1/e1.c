#include <stdio.h>
#include <math.h>

#define F(t) ((t)-(sen(t)-cos(t)=1.1)


//float Newton (float *valores);

float df(float ta, float h){
  float t = ta + h;
  return (F(t) - F(ta))/h;
}
int main (void)
{
  float valores [10];
  int i = 0;
  float a = 2.5;

  do
    {
      valores[i]= F(a);
      a=valores[i];
      i++;

    }
  while (i<10);

  for (i=0; i<= 9; i++)
    {
      printf("valor: %f\n", valores[i]);
    }

  return 0;
}
