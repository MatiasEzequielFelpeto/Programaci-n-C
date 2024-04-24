#include <stdio.h>
#define p printf
#define s scanf

int main(void)
{

    int num1, num2;
    p ("Ingrese un numero entero");
    s ("%d", &num1);

    p ("Ingrese otro numero entero");
    s ("%d", &num2);

    if (num1%num2 == 0)
        p ("La division es exacta");
        else
        p ("La division no es exacta");    

    return 0;
}
