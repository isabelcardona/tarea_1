#include <stdio.h>
#include "calculadora.h"

int main (void)
{
    int op,x1,y1;
    float res;
    printf("elija la operacion a realizar:\n");
    printf("ingrese:\n 1. suma\n 2. resta\n 3. multiplicacion\n 4. division");
    scanf("%d,&op");
    printf("Ingrese los numeros a operar\n");
    scanf("%d,&op");
    scanf("%d,&x1");
    scanf("%d,&y1");
    switch (op)
    {
        case 1: res=suma(x1,y1);
        break;
        case 2: res=resta(x1,y1);
        break;
        case 3: res=multiplicacion(x1,y1);
        break;
        case 4: res=division(x1,y1);
        break;
    }
    printf("el resultado es: %f",res);
return 0;
}
