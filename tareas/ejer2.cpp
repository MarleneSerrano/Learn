#include <iostream>
#include <cmath>

using namespace std;

#define F(t)(2+(8*t)-(5*t*t))

float df(float ta, float h)
{
  float t = ta+h;
  float x1 = F(t);
  float x2 = F(ta);
  float x3 = (x1 - x2)/h;
  printf("X1 = %f\n",x1);
  printf("X2 = %f\n",x2);
  printf("X3 = %f\n",x3);
  return x3;
  // return (F(t)-F(ta))/h;
}

int main()
{
  //primer alcance: puntos especificos
  float a = -0.22f;
  float h = 0.001f;

  printf("Para t=-0.22: %f\n ",df(a,h));
  return 0;
}
