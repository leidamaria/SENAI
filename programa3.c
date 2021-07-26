/*---- 
3. Fazer um programa que solicita um número decimal e imprime o
correspondente em hexa e octal. 
Por Leida Maria
-----*/

#include <stdio.h>

int calculaOctal(int num);
int calculaHexa(int num);
int main()
{
    float numero;
    printf("Digite um número decimal: ");
    scanf ("%f",&numero);
    int num = numero;
    calculaOctal(num);
    return 0;
}

int calculaOctal(int num)
{
    
    int nr_octal[10];
    int i = 0;
    int resul;
    while ( num >= 8)
    {
        resul = num / 8;
        int resto = num % 8; 
        nr_octal[i] = resto;
        num = resul;
        i++;
    }
    printf("Octal equivalente: %d", resul);
    for (int x=i-1; x>=0; x--)
    {
        printf("%d", nr_octal[x]);
    }
    
}
