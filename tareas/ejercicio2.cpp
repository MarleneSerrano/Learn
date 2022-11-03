#include <iostream>
#include <cmath>
using namespace std;

#define F(t) ((9*t)-2)

float df(float ta, float h)
{
        float t = ta + h;
        return (F(t)-F(ta))/h;

}

int main()
{
        //primer alcance: puntos especificicos
        float a = 0.1f;
        float h = 0.01;
        cout<<"Para T=0: "<<df(a,h)<<endl;
        a = 4.0f;
        cout<<"Para t=4: "<<df(a,h)<<endl;

        //segundo alcance: donde cambia el signo?
        for(float a=-5; a<5; a+=0.5)
        {
         cout<<"Para a= "<<a<<" : "<<df(a,h)<<endl;
        }

        return 0;
}
