#include <stdio.h> 
#include <math.h>
#include <stdlib.h>

#define F(t) (pow(t,2)-0.6*t)

float df (float ta; float h)
{	//primer alcance : puntos epecificos 
	float a = 0.0;
	float h = 0.01;

	printf("Para t=0: %f\n", df(a,h))
	a = 4.0;
	printf("Para t=4: %f\n", df(a, h);
	//segundo alcance: donde cambia el signo?
	for (float a=0; a<5; a+=0.5)
	 {
		printf("Para a=%f\n", df(a.h));
	 }

	return 0;
}
