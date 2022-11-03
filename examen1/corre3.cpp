/*
  @file: integrales.c
  @brief: programa que ejecuta el ejercicio tres del examen 1
  @date: 22/sep/2022
 */
#include <iostream>
#include <cmath>

using namespace std;

//Definición de la función que se pide 
#define F(x) ((0.2)+(25*x)-(2000*pow(x,2))+(675*pow(x,3))-(900*pow(x,4))+(400*pow(x,5)))

//Regla de simpson de 1/3
float simpsonTercio(float a, float b)
{
  float i;
  float suma=0.0;
  float d;

  suma=((b-a)/6*(F(a)+(4*F((a+b)/2))+F(b)));
  return suma;
}

//Trapecio por la derecha
float trapecio(float a, float b)
{
  float i;
  float suma=0.0;
  float d;

  d=(b-a)/8;

  for (i=a;i<b;i+=d)
    {
      suma+= F(i+d);
    }
  suma= (d/2)*(F(a)+(2*suma)+F(b));
  return suma;
}

//Aproximacion por suma al centro
float sumatoria(float a, float b)
{
  float i;
  float suma=0.0;
  float d;

  d=(b-a)/8;

  for (i=a;i<b;i+=d)
    {
      suma+= F(i+(d/2))*d;
    }
  return suma;
}

int main(void)
{
  float start=0.0;
  float end=3.0;
  float result = simpsonTercio(start,end);
  cout << "Por simpson =" << result << endl;
  result = trapecio(start,end);
  cout << "Por trapecio = " << result << endl;
  result = sumatoria(start,end);
  cout << "Por aproximiacion al centro = " << result << endl;
  return 0;
}
