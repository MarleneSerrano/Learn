#include <iostream>
#include <cmath>
using namespace std;

#define F(t) (pow(t,2)-6.0*t)

float df(float ta, float h)
{
	float t = ta + h;
	return (F(t)-F(ta))/h;

}

int main()
{
	//primer alcance: puntos especificicos 
	float a = 0.0f;
	float h = 0.01f;
	cout<<"para T=0: "<<df(a,h)<<endl;
	a = 4.0f;
	cout<<"para t=4: "<<df(a,h)<<endl;

	//segundo alcnce: donde cambia el signo?
	for(float a=0; a<5; a+=0.5)
	{
	 cout<<"para a="<<a<<" "<<df(a,h)<<endl;
	} 

	return 0;
}
