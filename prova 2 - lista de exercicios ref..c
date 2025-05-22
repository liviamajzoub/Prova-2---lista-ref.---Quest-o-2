#include <stdio.h>
#include <math.h>

int calcula_raizes(float a, float b, float c, float *x1, float *x2)
{

    float delta = b*b - 4*a*c;

    if (delta < 0)
    {
        return 0;
    }
    else if (delta == 0)
    {
        *x1 = *x2 = -b / (2*a);
        return 1;
    }
    else
    {
        *x1 = ( -b + sqrt(delta)) / (2*a);
        *x2 = ( -b - sqrt(delta)) / (2*a);
        return 2;
    }
}

int main()
{

    float a, b, c, x1, x2;

    int resultado;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor b: ");
    scanf("%f", &b);

    printf("Digite o valor c: ");
    scanf("%f", &c);

    resultado = calcula_raizes(a, b, c, &x1, &x2);

    if (resultado == 2)
    {
        printf("Duas raizes reais: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }

    else if (resultado == 1)
    {
        printf("Uma raiz real: x = %.2f\n", x1);
    }

    else
    {
        printf("Não existem raizes reais.\n");
    }

    return 0;
}
