#include <stdio.h>
#include <math.h>

#define F(x)pow(x,2)
#define a 3.0F
#define h 0.01F

int main()
{
	float df= (F(a+h)-F(a))/h;
	printf("resultado %f\n",df);
	return 0;
}
