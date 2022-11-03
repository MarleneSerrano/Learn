#include <iostream>
#include <cmath>
using namespace std;

#define F(x,y) ((-2*(pow(x,3)))+(12*(pow(x,2)))-(20*x)+8.5)
#define G(x,y) ((exp(-2*(x))/4)*(pow(x,4)+4))

/*Como en el ejemplo de Euler mejorado, ambas funciones
 utilizan la Y resultante de la formula correctiva para el siguiente ciclo*/

//Euler predictivo
float eulerpred(float x, float y, float h)
{
  float result;
  result = y+(F(x,y)*h);
  return result;
}

//Euler mejorado
float eulermej(float x, float y, float h, float xi, float yi)
{
  float result;
  result = y+((h/2)*(F(x,y)+F(xi,yi)));
  return result;
}

float eulerHeun(float x, float y, float h)
{
  float result;
  result = y + (F(x,y)*(h/2));
  return result;
}

int main()
{
  // X0, Y0 e intervalo H
  float x=0.0, y=1, h=0.1;
  float result, real;

  //Headers
//  cout << "X," << "True Y," << "Predictive Euler Y," << "%P.Error,";
//  cout << "Corrective Euler Y," << "%C.Error" << endl;

  //Primera fila
//  cout << x << "," << G(x,y) << "," << y << "," << "0," << y << ",0"<< endl;
  
  //Loop de euler
/*  for (x=0.1;x<1.01;x+=h)
    {
      real = G(x,y);
      result = eulerpred(x,y,h);
      cout << x << "," << real << "," << result << "," << ((real-result)/real)*100;
      result = eulermej(x,y,h,(x+h),result);
      cout << "," << result << "," << ((real-result)/real)*100 << endl;
      y=result;
    }*/

  float yMedia=0, xMedia=0;

  cout << "Xmedia," << "Ymedia,"<< "X," << "Y,"<< endl;
  for (x=0; x<1.00; x+=h)
  {
    cout << xMedia << "," << yMedia << "," << x << "," << y << endl;
    yMedia = eulerHeun(x, y, h);
    xMedia = x+(h/2);
    y = y + F(xMedia, yMedia)*h;
  }
 cout << xMedia << "," << yMedia << "," << x << "," << y << endl;

 cout << endl;
  return 0;
}
