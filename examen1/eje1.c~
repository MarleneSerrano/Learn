#include <stdio.h>
#include <math.h>

#define F(t)(sen(t)-cos(t)

float df(float ta, float h)
{
  float t = ta + h;
  return (F(t)-F(ta))/h;
}

float resultados(float min, float sust, float der)
{
  return (min-(sust/der));
}

int main(void)
{
        float reslt;
        float h = 0.01f;
        float min, max;
        int resultado, i, j;
        float resltmin, resltmax;
        system("clear");
        for (i=0; i<6; i++)
        {
                resultado = F(i);
                if (resultado < 0)
                {
                        resltmin = resultado;
                        min = i;
                }
                if (resultado > 0)
                {
                        resltmax = resultado;
                        max = i;
                        break;
                }
        }

        reslt[0] = min;
        printf ("\nRESULTADO: %.2f", reslt[0]);
        for (j=1; j<=8; j++)
        {
                reslt[j] = resultado(min, F(min), df(min,h));
                printf ("\nRESULTADO: %f", reslt[j]);
                min = reslt[j];
        }

        printf ("\n\n");
        return 0;
}
