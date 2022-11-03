#include <stdio.h>
#include <math.h>

#define F(t) (pow(t,2)-6.0*t)

float df(float ta, float h)
{
	float t = ta + h;
	return (F(t)-F(ta))/h;
} 

int main()
{
	//primer alcance:puntos especificos 
	float a = 0.0f;
	float h = 0.01f;
	printf("para t=0: f%\n", df(a,h));
	a = 4.0f;
	printf("´para t=4: %f\n", df(a,h));
	printf("--------------------------\n");
	//segundo alcance: donde cambia de signo?
	for(float a=0; a<5; a+=0.5)
	{
	    printf("para a=%f : %f\n", a,df(a,h));
	}
}
